//representation of dom
type t;

// getElementById
[@bs.val] [@bs.scope "document"]
external getElementById: string => t = "getElementById";

/**
 *  Not an exhaustive list, copied from reason-react project. Thank you reason-react contributors
 *
 */
[@bs.deriving abstract]
type domProps('state, 'payload) = {
  [@bs.optional] [@bs.as "aria-details"]
  ariaDetails: string,
  [@bs.optional] [@bs.as "aria-disabled"]
  ariaDisabled: bool,
  [@bs.optional] [@bs.as "aria-hidden"]
  ariaHidden: bool,
  /* [@bs.optional] [@bs.as "aria-invalid"] ariaInvalid: grammar|false|spelling|true, */
  [@bs.optional] [@bs.as "aria-keyshortcuts"]
  ariaKeyshortcuts: string,
  [@bs.optional] [@bs.as "aria-label"]
  ariaLabel: string,
  [@bs.optional] [@bs.as "aria-roledescription"]
  ariaRoledescription: string,
  [@bs.optional] [@bs.as "aria-expanded"]
  ariaExpanded: bool,
  /* [@bs.optional] [@bs.as "aria-haspopup"] ariaHaspopup: false|true|menu|listbox|tree|grid|dialog, */
  [@bs.optional] [@bs.as "aria-level"]
  ariaLevel: int,
  [@bs.optional] [@bs.as "aria-modal"]
  ariaModal: bool,
  [@bs.optional] [@bs.as "aria-multiline"]
  ariaMultiline: bool,
  [@bs.optional] [@bs.as "aria-multiselectable"]
  ariaMultiselectable: bool,
  /* [@bs.optional] [@bs.as "aria-orientation"] ariaOrientation: horizontal|vertical|undefined, */
  [@bs.optional] [@bs.as "aria-placeholder"]
  ariaPlaceholder: string,
  [@bs.optional] [@bs.as "aria-readonly"]
  ariaReadonly: bool,
  [@bs.optional] [@bs.as "aria-required"]
  ariaRequired: bool,
  [@bs.optional] [@bs.as "aria-selected"]
  ariaSelected: bool,
  [@bs.optional] [@bs.as "aria-sort"]
  ariaSort: string,
  [@bs.optional] [@bs.as "aria-valuemax"]
  ariaValuemax: float,
  [@bs.optional] [@bs.as "aria-valuemin"]
  ariaValuemin: float,
  [@bs.optional] [@bs.as "aria-valuenow"]
  ariaValuenow: float,
  [@bs.optional] [@bs.as "aria-valuetext"]
  ariaValuetext: string,
  /* Live Region Attributes */
  [@bs.optional] [@bs.as "aria-atomic"]
  ariaAtomic: bool,
  [@bs.optional] [@bs.as "aria-busy"]
  ariaBusy: bool,
  /* [@bs.optional] [@bs.as "aria-live"] ariaLive: off|polite|assertive|rude, */
  [@bs.optional] [@bs.as "aria-relevant"]
  ariaRelevant: string,
  /* Drag-and-Drop Attributes */
  /* [@bs.optional] [@bs.as "aria-dropeffect"] ariaDropeffect: copy|move|link|execute|popup|none, */
  [@bs.optional] [@bs.as "aria-grabbed"]
  ariaGrabbed: bool,
  /* Relationship Attributes */
  [@bs.optional] [@bs.as "aria-activedescendant"]
  ariaActivedescendant: string,
  [@bs.optional] [@bs.as "aria-colcount"]
  ariaColcount: int,
  [@bs.optional] [@bs.as "aria-colindex"]
  ariaColindex: int,
  [@bs.optional] [@bs.as "aria-colspan"]
  ariaColspan: int,
  [@bs.optional] [@bs.as "aria-controls"]
  ariaControls: string,
  [@bs.optional] [@bs.as "aria-describedby"]
  ariaDescribedby: string,
  [@bs.optional] [@bs.as "aria-errormessage"]
  ariaErrormessage: string,
  [@bs.optional] [@bs.as "aria-flowto"]
  ariaFlowto: string,
  [@bs.optional] [@bs.as "aria-labelledby"]
  ariaLabelledby: string,
  [@bs.optional] [@bs.as "aria-owns"]
  ariaOwns: string,
  [@bs.optional] [@bs.as "aria-posinset"]
  ariaPosinset: int,
  [@bs.optional] [@bs.as "aria-rowcount"]
  ariaRowcount: int,
  [@bs.optional] [@bs.as "aria-rowindex"]
  ariaRowindex: int,
  [@bs.optional] [@bs.as "aria-rowspan"]
  ariaRowspan: int,
  [@bs.optional] [@bs.as "aria-setsize"]
  ariaSetsize: int,
  /* react textarea/input */
  [@bs.optional]
  defaultChecked: bool,
  [@bs.optional]
  defaultValue: string,
  /* global html attributes */
  [@bs.optional]
  accessKey: string,
  [@bs.optional]
  className: string, /* substitute for "class" */
  [@bs.optional]
  contentEditable: bool,
  [@bs.optional]
  contextMenu: string,
  [@bs.optional]
  dir: string, /* "ltr", "rtl" or "auto" */
  [@bs.optional]
  draggable: bool,
  [@bs.optional]
  hidden: bool,
  [@bs.optional]
  id: string,
  [@bs.optional]
  lang: string,
  [@bs.optional]
  role: string, /* ARIA role */
  [@bs.optional]
  spellCheck: bool,
  [@bs.optional]
  tabIndex: int,
  [@bs.optional]
  title: string,
  /* html5 microdata */
  [@bs.optional]
  itemID: string,
  [@bs.optional]
  itemProp: string,
  [@bs.optional]
  itemRef: string,
  [@bs.optional]
  itemScope: bool,
  [@bs.optional]
  itemType: string, /* uri */
  /* tag-specific html attributes */
  [@bs.optional]
  accept: string,
  [@bs.optional]
  acceptCharset: string,
  [@bs.optional]
  action: string, /* uri */
  [@bs.optional]
  allowFullScreen: bool,
  [@bs.optional]
  alt: string,
  [@bs.optional]
  async: bool,
  [@bs.optional]
  autoComplete: string, /* has a fixed, but large-ish, set of possible values */
  [@bs.optional]
  autoFocus: bool,
  [@bs.optional]
  autoPlay: bool,
  [@bs.optional]
  challenge: string,
  [@bs.optional]
  charSet: string,
  [@bs.optional]
  checked: bool,
  [@bs.optional]
  cite: string, /* uri */
  [@bs.optional]
  crossorigin: bool,
  [@bs.optional]
  cols: int,
  [@bs.optional]
  colSpan: int,
  [@bs.optional]
  content: string,
  [@bs.optional]
  controls: bool,
  [@bs.optional]
  coords: string, /* set of values specifying the coordinates of a region */
  [@bs.optional]
  data: string, /* uri */
  [@bs.optional]
  dateTime: string, /* "valid date string with optional time" */
  [@bs.optional]
  default: bool,
  [@bs.optional]
  defer: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  download: string, /* should really be either a boolean, signifying presence, or a string */
  [@bs.optional]
  encType: string, /* "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" */
  [@bs.optional]
  form: string,
  [@bs.optional]
  formAction: string, /* uri */
  [@bs.optional]
  formTarget: string, /* "_blank", "_self", etc. */
  [@bs.optional]
  formMethod: string, /* "post", "get", "put" */
  [@bs.optional]
  headers: string,
  [@bs.optional]
  height: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  high: int,
  [@bs.optional]
  href: string, /* uri */
  [@bs.optional]
  hrefLang: string,
  [@bs.optional]
  htmlFor: string, /* substitute for "for" */
  [@bs.optional]
  httpEquiv: string, /* has a fixed set of possible values */
  [@bs.optional]
  icon: string, /* uri? */
  [@bs.optional]
  inputMode: string, /* "verbatim", "latin", "numeric", etc. */
  [@bs.optional]
  integrity: string,
  [@bs.optional]
  keyType: string,
  [@bs.optional]
  kind: string, /* has a fixed set of possible values */
  [@bs.optional]
  label: string,
  [@bs.optional]
  list: string,
  [@bs.optional]
  loop: bool,
  [@bs.optional]
  low: int,
  [@bs.optional]
  manifest: string, /* uri */
  [@bs.optional]
  max: string, /* should be int or Js.Date.t */
  [@bs.optional]
  maxLength: int,
  [@bs.optional]
  media: string, /* a valid media query */
  [@bs.optional]
  mediaGroup: string,
  [@bs.optional]
  method: string, /* "post" or "get" */
  [@bs.optional]
  min: int,
  [@bs.optional]
  minLength: int,
  [@bs.optional]
  multiple: bool,
  [@bs.optional]
  muted: bool,
  [@bs.optional]
  name: string,
  [@bs.optional]
  nonce: string,
  [@bs.optional]
  noValidate: bool,
  [@bs.optional] [@bs.as "open"]
  open_: bool, /* use this one. Previous one is deprecated */
  [@bs.optional]
  optimum: int,
  [@bs.optional]
  pattern: string, /* valid Js RegExp */
  [@bs.optional]
  placeholder: string,
  [@bs.optional]
  poster: string, /* uri */
  [@bs.optional]
  preload: string, /* "none", "metadata" or "auto" (and "" as a synonym for "auto") */
  [@bs.optional]
  radioGroup: string,
  [@bs.optional]
  readOnly: bool,
  [@bs.optional]
  rel: string, /* a space- or comma-separated (depending on the element) list of a fixed set of "link types" */
  [@bs.optional]
  required: bool,
  [@bs.optional]
  reversed: bool,
  [@bs.optional]
  rows: int,
  [@bs.optional]
  rowSpan: int,
  [@bs.optional]
  sandbox: string, /* has a fixed set of possible values */
  [@bs.optional]
  scope: string, /* has a fixed set of possible values */
  [@bs.optional]
  scoped: bool,
  [@bs.optional]
  scrolling: string, /* html4 only, "auto", "yes" or "no" */
  /* seamless - supported by React, but removed from the html5 spec */
  [@bs.optional]
  selected: bool,
  [@bs.optional]
  shape: string,
  [@bs.optional]
  size: int,
  [@bs.optional]
  sizes: string,
  [@bs.optional]
  span: int,
  [@bs.optional]
  src: string, /* uri */
  [@bs.optional]
  srcDoc: string,
  [@bs.optional]
  srcLang: string,
  [@bs.optional]
  srcSet: string,
  [@bs.optional]
  start: int,
  [@bs.optional]
  step: float,
  [@bs.optional]
  summary: string, /* deprecated */
  [@bs.optional]
  target: string,
  [@bs.optional] [@bs.as "type"]
  type_: string, /* has a fixed but large-ish set of possible values */ /* use this one. Previous one is deprecated */
  [@bs.optional]
  useMap: string,
  [@bs.optional]
  value: string,
  [@bs.optional]
  width: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  wrap: string, /* "hard" or "soft" */
  /* svg */
  [@bs.optional]
  accentHeight: string,
  [@bs.optional]
  accumulate: string,
  [@bs.optional]
  additive: string,
  [@bs.optional]
  alignmentBaseline: string,
  [@bs.optional]
  allowReorder: string,
  [@bs.optional]
  alphabetic: string,
  [@bs.optional]
  amplitude: string,
  [@bs.optional]
  arabicForm: string,
  [@bs.optional]
  ascent: string,
  [@bs.optional]
  attributeName: string,
  [@bs.optional]
  attributeType: string,
  [@bs.optional]
  autoReverse: string,
  [@bs.optional]
  azimuth: string,
  [@bs.optional]
  baseFrequency: string,
  [@bs.optional]
  baseProfile: string,
  [@bs.optional]
  baselineShift: string,
  [@bs.optional]
  bbox: string,
  [@bs.optional] [@bs.as "begin"]
  begin_: string, /* use this one. Previous one is deprecated */
  [@bs.optional]
  bias: string,
  [@bs.optional]
  by: string,
  [@bs.optional]
  calcMode: string,
  [@bs.optional]
  capHeight: string,
  [@bs.optional]
  clip: string,
  [@bs.optional]
  clipPath: string,
  [@bs.optional]
  clipPathUnits: string,
  [@bs.optional]
  clipRule: string,
  [@bs.optional]
  colorInterpolation: string,
  [@bs.optional]
  colorInterpolationFilters: string,
  [@bs.optional]
  colorProfile: string,
  [@bs.optional]
  colorRendering: string,
  [@bs.optional]
  contentScriptType: string,
  [@bs.optional]
  contentStyleType: string,
  [@bs.optional]
  cursor: string,
  [@bs.optional]
  cx: string,
  [@bs.optional]
  cy: string,
  [@bs.optional]
  d: string,
  [@bs.optional]
  decelerate: string,
  [@bs.optional]
  descent: string,
  [@bs.optional]
  diffuseConstant: string,
  [@bs.optional]
  direction: string,
  [@bs.optional]
  display: string,
  [@bs.optional]
  divisor: string,
  [@bs.optional]
  dominantBaseline: string,
  [@bs.optional]
  dur: string,
  [@bs.optional]
  dx: string,
  [@bs.optional]
  dy: string,
  [@bs.optional]
  edgeMode: string,
  [@bs.optional]
  elevation: string,
  [@bs.optional]
  enableBackground: string,
  [@bs.optional] [@bs.as "end"]
  end_: string, /* use this one. Previous one is deprecated */
  [@bs.optional]
  exponent: string,
  [@bs.optional]
  externalResourcesRequired: string,
  [@bs.optional]
  fill: string,
  [@bs.optional]
  fillOpacity: string,
  [@bs.optional]
  fillRule: string,
  [@bs.optional]
  filter: string,
  [@bs.optional]
  filterRes: string,
  [@bs.optional]
  filterUnits: string,
  [@bs.optional]
  floodColor: string,
  [@bs.optional]
  floodOpacity: string,
  [@bs.optional]
  focusable: string,
  [@bs.optional]
  fontFamily: string,
  [@bs.optional]
  fontSize: string,
  [@bs.optional]
  fontSizeAdjust: string,
  [@bs.optional]
  fontStretch: string,
  [@bs.optional]
  fontStyle: string,
  [@bs.optional]
  fontVariant: string,
  [@bs.optional]
  fontWeight: string,
  [@bs.optional]
  fomat: string,
  [@bs.optional]
  from: string,
  [@bs.optional]
  fx: string,
  [@bs.optional]
  fy: string,
  [@bs.optional]
  g1: string,
  [@bs.optional]
  g2: string,
  [@bs.optional]
  glyphName: string,
  [@bs.optional]
  glyphOrientationHorizontal: string,
  [@bs.optional]
  glyphOrientationVertical: string,
  [@bs.optional]
  glyphRef: string,
  [@bs.optional]
  gradientTransform: string,
  [@bs.optional]
  gradientUnits: string,
  [@bs.optional]
  hanging: string,
  [@bs.optional]
  horizAdvX: string,
  [@bs.optional]
  horizOriginX: string,
  [@bs.optional]
  ideographic: string,
  [@bs.optional]
  imageRendering: string,
  [@bs.optional] [@bs.as "in"]
  in_: string, /* use this one. Previous one is deprecated */
  [@bs.optional]
  in2: string,
  [@bs.optional]
  intercept: string,
  [@bs.optional]
  k: string,
  [@bs.optional]
  k1: string,
  [@bs.optional]
  k2: string,
  [@bs.optional]
  k3: string,
  [@bs.optional]
  k4: string,
  [@bs.optional]
  kernelMatrix: string,
  [@bs.optional]
  kernelUnitLength: string,
  [@bs.optional]
  kerning: string,
  [@bs.optional]
  keyPoints: string,
  [@bs.optional]
  keySplines: string,
  [@bs.optional]
  keyTimes: string,
  [@bs.optional]
  lengthAdjust: string,
  [@bs.optional]
  letterSpacing: string,
  [@bs.optional]
  lightingColor: string,
  [@bs.optional]
  limitingConeAngle: string,
  [@bs.optional]
  local: string,
  [@bs.optional]
  markerEnd: string,
  [@bs.optional]
  markerHeight: string,
  [@bs.optional]
  markerMid: string,
  [@bs.optional]
  markerStart: string,
  [@bs.optional]
  markerUnits: string,
  [@bs.optional]
  markerWidth: string,
  [@bs.optional]
  mask: string,
  [@bs.optional]
  maskContentUnits: string,
  [@bs.optional]
  maskUnits: string,
  [@bs.optional]
  mathematical: string,
  [@bs.optional]
  mode: string,
  [@bs.optional]
  numOctaves: string,
  [@bs.optional]
  offset: string,
  [@bs.optional]
  opacity: string,
  [@bs.optional]
  operator: string,
  [@bs.optional]
  order: string,
  [@bs.optional]
  orient: string,
  [@bs.optional]
  orientation: string,
  [@bs.optional]
  origin: string,
  [@bs.optional]
  overflow: string,
  [@bs.optional]
  overflowX: string,
  [@bs.optional]
  overflowY: string,
  [@bs.optional]
  overlinePosition: string,
  [@bs.optional]
  overlineThickness: string,
  [@bs.optional]
  paintOrder: string,
  [@bs.optional]
  panose1: string,
  [@bs.optional]
  pathLength: string,
  [@bs.optional]
  patternContentUnits: string,
  [@bs.optional]
  patternTransform: string,
  [@bs.optional]
  patternUnits: string,
  [@bs.optional]
  pointerEvents: string,
  [@bs.optional]
  points: string,
  [@bs.optional]
  pointsAtX: string,
  [@bs.optional]
  pointsAtY: string,
  [@bs.optional]
  pointsAtZ: string,
  [@bs.optional]
  preserveAlpha: string,
  [@bs.optional]
  preserveAspectRatio: string,
  [@bs.optional]
  primitiveUnits: string,
  [@bs.optional]
  r: string,
  [@bs.optional]
  radius: string,
  [@bs.optional]
  refX: string,
  [@bs.optional]
  refY: string,
  [@bs.optional]
  renderingIntent: string,
  [@bs.optional]
  repeatCount: string,
  [@bs.optional]
  repeatDur: string,
  [@bs.optional]
  requiredExtensions: string,
  [@bs.optional]
  requiredFeatures: string,
  [@bs.optional]
  restart: string,
  [@bs.optional]
  result: string,
  [@bs.optional]
  rotate: string,
  [@bs.optional]
  rx: string,
  [@bs.optional]
  ry: string,
  [@bs.optional]
  scale: string,
  [@bs.optional]
  seed: string,
  [@bs.optional]
  shapeRendering: string,
  [@bs.optional]
  slope: string,
  [@bs.optional]
  spacing: string,
  [@bs.optional]
  specularConstant: string,
  [@bs.optional]
  specularExponent: string,
  [@bs.optional]
  speed: string,
  [@bs.optional]
  spreadMethod: string,
  [@bs.optional]
  startOffset: string,
  [@bs.optional]
  stdDeviation: string,
  [@bs.optional]
  stemh: string,
  [@bs.optional]
  stemv: string,
  [@bs.optional]
  stitchTiles: string,
  [@bs.optional]
  stopColor: string,
  [@bs.optional]
  stopOpacity: string,
  [@bs.optional]
  strikethroughPosition: string,
  [@bs.optional]
  strikethroughThickness: string,
  [@bs.optional]
  string,
  [@bs.optional]
  stroke: string,
  [@bs.optional]
  strokeDasharray: string,
  [@bs.optional]
  strokeDashoffset: string,
  [@bs.optional]
  strokeLinecap: string,
  [@bs.optional]
  strokeLinejoin: string,
  [@bs.optional]
  strokeMiterlimit: string,
  [@bs.optional]
  strokeOpacity: string,
  [@bs.optional]
  strokeWidth: string,
  [@bs.optional]
  surfaceScale: string,
  [@bs.optional]
  systemLanguage: string,
  [@bs.optional]
  tableValues: string,
  [@bs.optional]
  targetX: string,
  [@bs.optional]
  targetY: string,
  [@bs.optional]
  textAnchor: string,
  [@bs.optional]
  textDecoration: string,
  [@bs.optional]
  textLength: string,
  [@bs.optional]
  textRendering: string,
  [@bs.optional] [@bs.as "to"]
  to_: string, /* use this one. Previous one is deprecated */
  [@bs.optional]
  transform: string,
  [@bs.optional]
  u1: string,
  [@bs.optional]
  u2: string,
  [@bs.optional]
  underlinePosition: string,
  [@bs.optional]
  underlineThickness: string,
  [@bs.optional]
  unicode: string,
  [@bs.optional]
  unicodeBidi: string,
  [@bs.optional]
  unicodeRange: string,
  [@bs.optional]
  unitsPerEm: string,
  [@bs.optional]
  vAlphabetic: string,
  [@bs.optional]
  vHanging: string,
  [@bs.optional]
  vIdeographic: string,
  [@bs.optional]
  vMathematical: string,
  [@bs.optional]
  values: string,
  [@bs.optional]
  vectorEffect: string,
  [@bs.optional]
  version: string,
  [@bs.optional]
  vertAdvX: string,
  [@bs.optional]
  vertAdvY: string,
  [@bs.optional]
  vertOriginX: string,
  [@bs.optional]
  vertOriginY: string,
  [@bs.optional]
  viewBox: string,
  [@bs.optional]
  viewTarget: string,
  [@bs.optional]
  visibility: string,
  /*width::string? =>*/
  [@bs.optional]
  widths: string,
  [@bs.optional]
  wordSpacing: string,
  [@bs.optional]
  writingMode: string,
  [@bs.optional]
  x: string,
  [@bs.optional]
  x1: string,
  [@bs.optional]
  x2: string,
  [@bs.optional]
  xChannelSelector: string,
  [@bs.optional]
  xHeight: string,
  [@bs.optional]
  xlinkActuate: string,
  [@bs.optional]
  xlinkArcrole: string,
  [@bs.optional]
  xlinkHref: string,
  [@bs.optional]
  xlinkRole: string,
  [@bs.optional]
  xlinkShow: string,
  [@bs.optional]
  xlinkTitle: string,
  [@bs.optional]
  xlinkType: string,
  [@bs.optional]
  xmlns: string,
  [@bs.optional]
  xmlnsXlink: string,
  [@bs.optional]
  xmlBase: string,
  [@bs.optional]
  xmlLang: string,
  [@bs.optional]
  xmlSpace: string,
  [@bs.optional]
  y: string,
  [@bs.optional]
  y1: string,
  [@bs.optional]
  y2: string,
  [@bs.optional]
  yChannelSelector: string,
  [@bs.optional]
  z: string,
  [@bs.optional]
  zoomAndPan: string,
  /* RDFa */
  [@bs.optional]
  about: string,
  [@bs.optional]
  datatype: string,
  [@bs.optional]
  inlist: string,
  [@bs.optional]
  prefix: string,
  [@bs.optional]
  property: string,
  [@bs.optional]
  resource: string,
  [@bs.optional]
  typeof: string,
  [@bs.optional]
  vocab: string,
  /* react-specific */
  [@bs.optional]
  dangerouslySetInnerHTML: {. "__html": string},
  [@bs.optional]
  suppressContentEditableWarning: bool,
  /* Clipboard events */
  [@bs.optional]
  onCopy: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onCut: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onPaste: (('state, 'payload) => 'state, 'payload),
  /* Composition events */
  [@bs.optional]
  onCompositionEnd: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onCompositionStart: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onCompositionUpdate: (('state, 'payload) => 'state, 'payload),
  /* Keyboard events */
  [@bs.optional]
  onKeyDown: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onKeyPress: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onKeyUp: (('state, 'payload) => 'state, 'payload),
  /* Focus events */
  [@bs.optional]
  onFocus: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onBlur: (('state, 'payload) => 'state, 'payload),
  /* Form events */
  [@bs.optional]
  onChange: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onInput: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onSubmit: (('state, 'payload) => 'state, 'payload),
  /* Mouse events */
  [@bs.optional]
  onClick: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onContextMenu: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDoubleClick: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDrag: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragEnd: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragEnter: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragExit: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragLeave: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragOver: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDragStart: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDrop: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseDown: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseEnter: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseLeave: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseMove: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseOut: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseOver: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onMouseUp: (('state, 'payload) => 'state, 'payload),
  /* Selection events */
  [@bs.optional]
  onSelect: (('state, 'payload) => 'state, 'payload),
  /* Touch events */
  [@bs.optional]
  onTouchCancel: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onTouchEnd: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onTouchMove: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onTouchStart: (('state, 'payload) => 'state, 'payload),
  /* UI events */
  [@bs.optional]
  onScroll: (('state, 'payload) => 'state, 'payload),
  /* Wheel events */
  [@bs.optional]
  onWheel: (('state, 'payload) => 'state, 'payload),
  /* Media events */
  [@bs.optional]
  onAbort: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onCanPlay: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onCanPlayThrough: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onDurationChange: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onEmptied: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onEncrypetd: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onEnded: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onError: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onLoadedData: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onLoadedMetadata: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onLoadStart: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onPause: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onPlay: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onPlaying: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onProgress: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onRateChange: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onSeeked: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onSeeking: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onStalled: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onSuspend: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onTimeUpdate: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onVolumeChange: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onWaiting: (('state, 'payload) => 'state, 'payload),
  /* Image events */
  [@bs.optional]onLoad: (('state, 'payload) => 'state, 'payload) /* duplicate */, /*~onError: ('state,Dom.event)=> 'state=?,*/
  /* Animation events */
  [@bs.optional]
  onAnimationStart: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onAnimationEnd: (('state, 'payload) => 'state, 'payload),
  [@bs.optional]
  onAnimationIteration: (('state, 'payload) => 'state, 'payload),
  /* Transition events */
  [@bs.optional]
  onTransitionEnd: (('state, 'payload) => 'state, 'payload),
};

/**
 * This is a handy method to be used
 * when custom attributes like data-* passed and
 * named parameters cannot be passed as we dont know before hand
 */
external makePropsFromJS: Js.t({..}) => domProps('state, 'payload) =
  "%identity";
let makePropsFromJS = makePropsFromJS;
let makeProps = domProps;