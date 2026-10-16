#include <stdint.h>

typedef uint32_t XbeAddr32;

extern XbeAddr32 sub_00085620(XbeAddr32 descriptor_table, uint32_t count);

/* Converts the descriptor-table setup result to exactly 0 or 1. */
int32_t sub_00085770(void)
{
    return sub_00085620(0x00298EA0u, 0x0Fu) != 0u;
}
