/**
 * Core module - interops with Hyperapp
 */
[@bs.module "hyperapp"]
external h:
  (string, HyperappDom.props, array(HyperappElement.t)) => HyperappElement.t =
  "h";
/**
 * Types for subscription and view
 */
type subscription('state) = 'state => HyperappSubscriptions.t;
type view('state, 'element) = 'state => 'element;

/**
 * App props to be passed to app function of Hyperapp
 */
type appProps('state, 'element) = {
  .
  "init": 'state,
  "view": view('state, 'element),
  "node": HyperappDom.t,
  "subscriptions": subscription('state),
};

/**
 * Interop for app
 */
[@bs.module "hyperapp"]
external app: appProps('state, HyperappElement.t) => unit = "app";

/**
 * use makeapp for creating the app
 */
[@bs.obj]
external makeApp:
  (
    ~init: 'state,
    ~view: view('state, HyperappElement.t),
    ~node: 'node,
    ~subscriptions: subscription('state)=?,
    unit
  ) =>
  appProps('state, HyperappElement.t);