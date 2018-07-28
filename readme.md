# prerequisite environment setup
``` bash
source ../emsdk/emsdk_env.sh --build=Release

```


# compile command:
``` bash
emcc -o writebmp.js func.cxx -s EXPORTED_FUNCTIONS="['_fillArray']" -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap", "getValue"]' -s MODULARIZE=1 -s 'EXPORT_NAME="MyCode"'
```

# run server
``` bash
emrun --no_browser --port 8080 .
```