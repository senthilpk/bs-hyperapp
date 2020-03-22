/**
 *  actions always return state and we need to wrap payload and effects with this to make it safe
 *
 */
external effects_as_state: 'effectswithpayload => 'state = "%identity";

/**
 *  mask payload as effect and return as part of array of effects.
 */
external payload_to_effect: 'payload => 'effect = "%identity";

/**
 * Batch effects, Public function to be called.
 */
let batchEffects = (~payload: 'payload, ~effects: array('effect)) => {
  let finalEffects =
    Belt.Array.concatMany([|[|payload_to_effect(payload)|], effects|]);
  effects_as_state(finalEffects);
};