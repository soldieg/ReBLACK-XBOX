#include <stdint.h>

typedef uint32_t XbeAddr32;

/* Called through sub_000830D0's four-argument factory callback. */
XbeAddr32 __cdecl sub_00082B10(XbeAddr32 object_config,
                               uint32_t requested_size,
                               XbeAddr32 work_buffer,
                               uint32_t adjusted_size)
{
    (void)object_config;
    (void)requested_size;
    (void)work_buffer;
    (void)adjusted_size;

    return 0x002C02A8u;
}
