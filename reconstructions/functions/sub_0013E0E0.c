#include <stdint.h>

#ifndef __cdecl
#define __cdecl
#endif

/*
 * Callback target stored by sub_00152840 and passed through the init table.
 * The three arguments reflect the indirect call site in sub_00088B30;
 * this leaf ignores them and returns zero, matching XOR EAX,EAX; RET.
 */
uint32_t __cdecl sub_0013E0E0(uint32_t ignored_size,
                              uint32_t ignored_mode,
                              uint32_t ignored_tag)
{
    (void)ignored_size;
    (void)ignored_mode;
    (void)ignored_tag;
    return 0u;
}
