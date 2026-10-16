#include <stdint.h>

typedef uint32_t XbeAddr32;

#define XBE_READ32(address) \
    (*(volatile const XbeAddr32 *)(uintptr_t)(address))

extern XbeAddr32 __cdecl sub_00085A40(XbeAddr32 list_head, XbeAddr32 key);

void __cdecl sub_00081030(XbeAddr32 key)
{
    XbeAddr32 entry = XBE_READ32(0x00575508u);

    while (entry != 0x00575508u) {
        (void)sub_00085A40(entry - 0x10u, key);
        entry = XBE_READ32(entry);
    }
}

#undef XBE_READ32

