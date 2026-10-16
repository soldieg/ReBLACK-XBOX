#include <stdint.h>
#include <stddef.h>

typedef uint32_t XbeAddr32;
typedef void (*XbeCleanupCallback)(XbeAddr32 address, XbeAddr32 context);

extern void sub_00082FF0(XbeAddr32 *object, XbeCleanupCallback callback,
                         XbeAddr32 context);
extern void sub_00086390(XbeAddr32 *list_context);

#define XBE_READ32(address) \
    (*(volatile const uint32_t *)(uintptr_t)(address))
#define XBE_WRITE32(address, value) \
    (*(volatile uint32_t *)(uintptr_t)(address) = (uint32_t)(value))

/* Static reconstruction of the XboxRecomp split; REA does not decode this entry. */
void __cdecl sub_00083090(void)
{
    const XbeAddr32 object_address = XBE_READ32(0x002C0300u);

    XBE_WRITE32(0x002C02D8u, 1u);
    sub_00082FF0((XbeAddr32 *)(uintptr_t)object_address, NULL, 0u);

    XBE_WRITE32(0x002C0300u, 0u);
    sub_00086390((XbeAddr32 *)(uintptr_t)0x002C02DCu);
    XBE_WRITE32(0x002C0304u, 0u);
}

#undef XBE_READ32
#undef XBE_WRITE32
