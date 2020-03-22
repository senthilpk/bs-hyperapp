import resolve from "@rollup/plugin-node-resolve";
import commonjs from "@rollup/plugin-commonjs";
import copy from "rollup-plugin-copy";

module.exports = {
  input: "lib/es6/src/examples/Index.bs.js",
  output: {
    sourcemap: true,
    file: "./public/bundle.js",
    format: "iife",
    name: "bsHyperApp",
    exports: "named"
  },
  plugins: [
    copy({
      targets: [
        {
          src: "src/hyperapp/HyperappUtil.bs.js",
          dest: "lib/es6/src/Hyperapp"
        }
      ]
    }),
    resolve(),
    commonjs()
  ]
};
