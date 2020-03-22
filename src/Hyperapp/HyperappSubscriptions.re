type t;
/**
 * Make it safe for subscription object to return in format expected.
 */
external runSubscriptions: 'subscription => t = "%identity";

/**
 * Subscription function should return always a function and when no action is specified,
 * we could use dummyFuntion to make it safe.
 */
let dummyFunction = _ => {
  None;
};

/**
 * Variant to wrap the subscription function
 */
type subscriptionCleanupType('fn) =
  | NoCleanup
  | Cleanup('fn);

/**
 * Subscription function, payload and cleanup function is additionally take in this case.
 * Cleanup function is usually returned as part of subscription function.
 *
 */
let executeSubscription = (~fn, ~payload, ~cleanupFn) => {
  let context = dispatch => {
    let returnVal = fn(dispatch, payload);
    let thisCleanupFn =
      switch (cleanupFn) {
      | NoCleanup => dummyFunction
      | Cleanup(fnToExecute) => (
          () => {
            fnToExecute(returnVal);
            None;
          }
        )
      };
    thisCleanupFn;
  };
  runSubscriptions((context, payload));
};

/**
 * Just exectues the passed action
 */
let nooperation = (dispatch, options) => {
  dispatch(. options##action);
};

/**
 * return states as its
 */
let noaction = state => state;