/*
 * Exact Xbox x86 body for sub_00082030.
 * The return value is forwarded from sub_00081FA0; a null handle returns 0.
 * The relative JMP displacement is fixed for the original XBE layout:
 * 0x00082042 + 0xFFFFFF5E = 0x00081FA0.
 */
#include <stdint.h>
typedef uint32_t XbeAddr32;
__declspec(naked) uint32_t __cdecl sub_00082030(XbeAddr32 interface_object,
                                                uint32_t index,
                                                uint32_t ignored_argument,
                                                XbeAddr32 value_pointer)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jnz nonzero_handle
        ret
    nonzero_handle:
        mov dword ptr [esp + 4], eax
        __emit 0xE9
        __emit 0x5E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    }
}
