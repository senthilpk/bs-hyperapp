open Hyperapp;
open Hyperapp.DomLike;
open Hyperapp.Effector;
open Hyperapp.Effectx;
open Hyperapp.Element;
open Hyperapp.Subscriptions;

let str_to_element = string_to_element;

/**
 * State management
 */

type person = {
  age: int,
  name: string,
};

let anotherLocalState = Store.make({age: 39, name: "Senthil"});

let localState: Store.t(int) = Store.make(0);
let increment: Event.t(unit) = Event.make("increment");
let decrement: Event.t(unit) = Event.make("decrement");
let ageIncrement: Event.t(unit) = Event.make("ageIncrement");

Store.(
  localState
  |> on(increment, (state, _) => state + 1)
  |> on(decrement, (state, _) => state - 1)
);

Store.on(
  ageIncrement,
  (state: person, _) => {{...state, age: state.age + 1}},
  anotherLocalState,
);

let withId = (id: int, payload: Dom.event) => {
  {"id": id, "payload": payload};
};

let customEffect = props => {
  let effectFn = (dispatch, props) => {
    //remember to uncurry this function always
    dispatch(. props##action);
    props;
  };
  (effectFn, props);
};

let actionHandler = _ => {
  ageIncrement();
  anotherLocalState##getState();
};

// Props and Handler
let propsAndHandlers =
  makeProps(
    ~onClick=(
      (_: person, _) => {
        batchEffects(
          ~payload=anotherLocalState##getState(),
          ~effects=[|customEffect({"action": actionHandler})|],
        );
      },
      withId(506),
    ),
    (),
  );

let children = props => {
  h("div", makeProps(), [|str_to_element(props.name)|]);
};

let div = props => {
  h(
    "div",
    propsAndHandlers,
    [|str_to_element(string_of_int(props.age)), children(props)|],
  );
};
let root = getElementById("root");

let intervalSubscription = (dispatch, options) => {
  dispatch(. options##action);
};

let stopEditingFilter = state => {
  Js.log2("stopEditingFilter", state);
  state;
};

//Setup APP
let myapp =
  makeApp(
    ~init=anotherLocalState##getState(),
    ~view=state => div(state),
    ~node=root,
    ~subscriptions=
      state => {
        Js.log2("subscriptions running", state);

        let subs =
          switch (state) {
          | state when state.age > 50 && state.age < 55 =>
            executeSubscription(
              ~fn=intervalSubscription,
              ~payload={"action": stopEditingFilter, "time": 400},
              ~cleanupFn=
                Cleanup(
                  payload => {Js.log2("Payload for clean up - 1", payload)},
                ),
            )
          | state when state.age > 55 && state.age < 60 =>
            executeSubscription(
              ~fn=intervalSubscription,
              ~payload={"action": stopEditingFilter, "time": 500},
              ~cleanupFn=NoCleanup,
            )
          | _ =>
            executeSubscription(
              ~fn=nooperation,
              ~payload={"action": noaction},
              ~cleanupFn=NoCleanup,
            )
          };

        subs;
      },
    (),
  );

app(myapp);