#include <stdint.h>

typedef uint32_t XbeAddr32;

/* Initializes the inline sentinel/header used by the shared list helpers. */
void sub_0008B030(XbeAddr32 *context)
{
    XbeAddr32 sentinel = (XbeAddr32)(uintptr_t)(context + 1);

    context[0] = 0u;
    context[1] = sentinel;
    context[2] = sentinel;
}
