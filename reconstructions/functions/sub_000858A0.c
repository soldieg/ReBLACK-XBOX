#include <stdint.h>

typedef uint32_t XbeAddr32;

#define XBE_WRITE32(address, value) \
    (*(volatile uint32_t *)(uintptr_t)(address) = (uint32_t)(value))

extern void sub_00086390(XbeAddr32 *list_context);

/* Static reconstruction of callback-table rollback index 4. */
void sub_000858A0(void)
{
    sub_00086390((XbeAddr32 *)(uintptr_t)0x005754A0u);
    XBE_WRITE32(0x002C2834u, 0u);
}

#undef XBE_WRITE32
