# Overall

Using webassembly (https://webassembly.org/) to calculate the square of every element in an float array. Use Javascript to input an array and get a return array(result). Also, the function in C++ is called by JS.

The input and output array are printed in browser console.

# Prerequisite environment setup (http://kripken.github.io/emscripten-site/)

After installing Emscripten SDK, use the command to active the environment]

``` bash
source ./emsdk_env.sh

```

# Compile command:
``` bash
emcc -o writebmp.js func.cxx -s EXPORTED_FUNCTIONS="['_fillArray']" -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap", "getValue"]' -s MODULARIZE=1 -s 'EXPORT_NAME="MyCode"'
```

# Run server
To install static server, install node.js first and use command:
```bash
sudo npm install -g static-server
```
To run server, use command:

``` bash
static-server
```
