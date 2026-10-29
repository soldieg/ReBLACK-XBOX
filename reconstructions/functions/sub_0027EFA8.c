#include <stdint.h>

/* The observed caller passes the object in ECX; preserve the leaf's exact ABI. */
__declspec(naked) uint32_t sub_0027EFA8(void)
{
    __asm {
        mov eax, dword ptr [ecx + 1Ch]
        ret
    }
}
