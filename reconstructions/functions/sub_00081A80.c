#include <stdint.h>

#ifndef XBE_WRITE32
#define XBE_WRITE32(address, value) \
    (*(volatile uint32_t *)(uintptr_t)(address) = (uint32_t)(value))
#endif

typedef uint32_t u32;

extern u32 sub_00081750(u32 list_context);
extern void sub_00086390(u32 *list_context);

/* Manual static reconstruction of callback-table rollback index 6. */
void sub_00081A80(void)
{
    XBE_WRITE32(0x002C0234u, 1u);
    (void)sub_00081750(0x002C0190u);
    sub_00086390((u32 *)(uintptr_t)0x002C01ECu);
    sub_00086390((u32 *)(uintptr_t)0x002C0210u);
    sub_00086390((u32 *)(uintptr_t)0x002C0168u);
    XBE_WRITE32(0x002C0238u, 0u);
}

#undef XBE_WRITE32
