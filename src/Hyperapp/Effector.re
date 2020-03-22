/**
 * This is copied from bs-effector due to bs linking issues
 * TODO: use bs-effector directly as dependency
 */
module Unit = {};

module Domain = {
  include Unit;

  type t('e) = 'e => 'e;

  [@bs.module "effector"] external make: string => t('e) = "createDomain";
};

module Effect = {
  include Unit;

  type t('e) = 'e => 'e;

  [@bs.module "effector"] external make: string => t('e) = "createEffect";
};

module Event = {
  include Unit;

  type t('e) = 'e => 'e;

  [@bs.module "effector"] external make: string => t('e) = "createEvent";

  [@bs.send] external _map: (t('a), 'a => 'b) => t('b) = "map";

  [@bs.send] external _watch: (t('p), 'p => unit) => unit = "watch";

  let watch: ('p => unit, t('p)) => unit = (f, event) => _watch(event, f);

  let map: ('a => 'b, t('a)) => t('b) = (f, event) => _map(event, f);
};

module Store = {
  include Unit;

  type t('a) = {
    .
    "kind": int,
    "defaultState": 'a,
    "shortName": string,
    [@bs.meth] "getState": unit => 'a,
  };

  type subscription = unit => unit;

  [@bs.module "effector"] external make: 'state => t('state) = "createStore";
  [@bs.module "effector"]
  external makeObject: 'a => t('b) = "createStoreObject";

  [@bs.send] external _map: (t('a), 'a => 'b) => t('b) = "map";

  [@bs.send]
  external _on:
    (t('state), Event.t('e), ('state, 'e) => 'state) => t('state) =
    "on";

  [@bs.send]
  external _watch: (t('state), 'state => unit) => subscription = "watch";

  [@bs.send] external _getState: t('state) => 'state = "getState";

  let on: (Event.t('e), ('state, 'e) => 'state, t('state)) => t('state) =
    (event, f, store) => _on(store, event, f);
  let map: ('a => 'b, t('a)) => t('b) = (f, store) => _map(store, f);
  let watch: ('state => unit, t('state)) => subscription =
    (f, store) => _watch(store, f);
  let getState: t('state) => 'state = store => _getState(store);
};