#include <stdint.h>

typedef uint32_t u32;
typedef int (*sub_00081520_callback)(u32 context, u32 item, u32 opaque);

extern u32 *sub_00081520(
    u32 *context,
    u32 **out_context,
    sub_00081520_callback callback,
    u32 opaque,
    int probe_context);
extern void sub_00086390(u32 *list_context);
extern int sub_0007E710(u32 ignored_arg1, u32 manager, u32 ignored_arg3);

void sub_0007EB20(void)
{
    (void)sub_00081520(0, 0, sub_0007E710, 0, 1);
    sub_00086390((u32 *)(uintptr_t)0x002BFFA8);
    *(volatile u32 *)(uintptr_t)0x002BFFCC = 0;
}
