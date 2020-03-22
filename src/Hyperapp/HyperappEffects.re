/**
 * This is to re-arrange payload and array of effects to a order Hyperapp expects
 *
 *  e.g  payload={name:"Senthil"} and effects = [effect1,effect2] to
 *       [effect1,effect2,payload]
 *
 */
[@bs.module "./HyperappUtil.bs.js"]
external effects_payload: ('payload, array('effect)) => 'effectwithpayload =
  "flatten";
/**
 *  actions always return state and we need to wrap payload and effects with this to make it safe
 *
 */
external effects_as_state: 'effectswithpayload => 'state = "%identity";

/**
 * Batch effects, Public function to be called.
 */
let batchEffects = (~payload: 'payload, ~effects: array('effect)) => {
  let flattened_effects_payload = effects_payload(payload, effects);
  effects_as_state(flattened_effects_payload);
};