#pragma once

#include <stdint.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;

#ifdef __cplusplus
extern "C" {
#endif

extern void gr_reply(const uint8_t *payload, uint32_t len, const uint128_t *value, uint32_t delay, void *err_mid);

#ifdef __cplusplus
}
#endif

namespace msg {

void reply(const char *payload, uint128_t value) {
    gr_reply(reinterpret_cast<const uint8_t *>(payload), sizeof(payload), &value, 0, nullptr);
}

} // namespace msg
