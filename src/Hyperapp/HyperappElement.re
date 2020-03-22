type t;
/**
 * return string/text as element
 */
external string_to_element: string => t = "%identity";

/**
 * returns array of element as element
 */
external array: array(t) => t = "%identity";