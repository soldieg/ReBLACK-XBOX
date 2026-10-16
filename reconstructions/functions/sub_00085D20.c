#include <stdint.h>

typedef uint32_t XbeAddr32;

extern XbeAddr32 sub_00085C00(XbeAddr32 manager);
extern XbeAddr32 sub_00085BD0(XbeAddr32 manager);

/* Releases both owned resources and returns the same manager address. */
XbeAddr32 sub_00085D20(XbeAddr32 manager)
{
    sub_00085C00(manager);
    sub_00085BD0(manager);
    return manager;
}
