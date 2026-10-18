#include <intrin.h>
#include <stdint.h>

/* REA renders the zero-input case as 0; the XBE BSF result is undefined for zero. */
uint32_t __fastcall sub_002180FD(uint32_t bits)
{
    unsigned long index;
    (void)_BitScanForward(&index, bits);
    return index;
}
