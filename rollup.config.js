import resolve from "@rollup/plugin-node-resolve";
import commonjs from "@rollup/plugin-commonjs";

module.exports = {
  input: "lib/es6/src/examples/Index.bs.js",
  output: {
    sourcemap: true,
    file: "./public/bundle.js",
    format: "iife",
    name: "bsHyperApp",
    exports: "named"
  },
  plugins: [resolve(), commonjs()]
};
