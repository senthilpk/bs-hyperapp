let flatten = (payload, effects) => {
  let payloadWithEffects = [payload].concat(effects);
  return payloadWithEffects;
};

export { flatten };
