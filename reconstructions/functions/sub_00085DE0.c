#include <stdint.h>

extern void sub_000865E0(void *allocation);

/* Five-byte tail thunk at 0x00085DE0: JMP 0x000865E0. */
void sub_00085DE0(void *allocation)
{
    sub_000865E0(allocation);
}
