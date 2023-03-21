#include <gstd/debug.h>
#include <gstd/msg.h>

#define WASM_EXPORT __attribute__((visibility("default"))) extern "C"

WASM_EXPORT void init() {
    debug("INIT");
}

WASM_EXPORT void handle() {
    msg::reply("PONG", 0);
}
