//representation of dom
type props;

// getElementById
[@bs.val] [@bs.scope "document"]
external getElementById: string => t = "getElementById";

/**
 * This is a handy method to be used
 * when custom attributes like data-* passed and
 * named parameters cannot be passed as we dont know before hand
 */
external makePropsFromJS: Js.t({..}) => props = "%identity";
let makeProps = makePropsFromJS;