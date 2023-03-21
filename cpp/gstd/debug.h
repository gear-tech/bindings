#pragma once

#ifdef __cplusplus
extern "C" {
#endif

extern void gr_debug();

#ifdef __cplusplus
}
#endif

void debug(const char *message) {
    gr_debug();
}
