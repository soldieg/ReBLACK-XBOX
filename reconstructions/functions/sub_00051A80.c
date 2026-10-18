#include <stdint.h>

/* The middle fastcall register argument is an ABI adapter hypothesis. */
void __fastcall sub_00051A80(volatile uint32_t *self, uint32_t unused_edx, uint32_t value)
{
    (void)unused_edx;
    self[7] = value;
}
