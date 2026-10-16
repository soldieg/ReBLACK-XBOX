#include <stdint.h>

typedef uint32_t u32;
extern void sub_00086390(u32 *list_context);

void sub_0007EB80(void)
{
    sub_00086390((u32 *)(uintptr_t)0x002BFFD0);
    *(volatile u32 *)(uintptr_t)0x002BFFF4 = 0;
}
