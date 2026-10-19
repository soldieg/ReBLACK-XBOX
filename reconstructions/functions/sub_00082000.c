/*
 * Reconstrucao de corpo x86 para sub_00082000 (0x00082000).
 * Prova ObjDiff/bytes e limitacao de layout estao em function-sub_00082000-exact-attempt-20261016.
 * A chamada rel32 esta presa ao layout original: call em 0x82019 -> 0x81FA0.
 */
#include <stdint.h>

typedef uint32_t XbeAddr32;

__declspec(naked) void __cdecl sub_00082000(XbeAddr32 interface_object, uint32_t index, uint32_t ignored_argument, uint32_t value)
{
    __asm {
        mov eax, dword ptr [esp+4]
        test eax, eax
        jnz short has_interface
        ret
    has_interface:
        mov edx, dword ptr [esp+0Ch]
        lea ecx, dword ptr [esp+10h]
        push ecx
        mov ecx, dword ptr [esp+0Ch]
        push edx
        push ecx
        push eax
        __emit 0xE8
        __emit 0x82
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        add esp, 10h
        ret
    }
}
