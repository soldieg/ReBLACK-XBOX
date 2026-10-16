#include <stdint.h>

typedef uint32_t XbeAddr32;

#define XBE_READ32(address) \
    (*(volatile const XbeAddr32 *)(uintptr_t)(address))
#define XBE_WRITE32(address, value) \
    (*(volatile XbeAddr32 *)(uintptr_t)(address) = (XbeAddr32)(value))

typedef XbeAddr32 (__cdecl *XbeListCallback)(XbeAddr32 element, XbeAddr32 context);

extern void __cdecl sub_00080F20(
    XbeAddr32 manager, XbeListCallback callback, XbeAddr32 context);
extern XbeAddr32 __cdecl sub_0007F470(XbeAddr32 element, XbeAddr32 context);

void __cdecl sub_0007F4A0(XbeAddr32 manager)
{
    sub_00080F20(
        manager,
        sub_0007F470,
        XBE_READ32(manager + 0x28u));
    XBE_WRITE32(manager + 0x28u, 0);
}

#undef XBE_READ32
#undef XBE_WRITE32
