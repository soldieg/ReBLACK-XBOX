/* Exact x86 body of sub_00081FA0 at original XBE VA 0x00081FA0.
 * The callback remains indirect; its concrete target and method semantics are unknown.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 */
#include <stdint.h>
__declspec(naked) uint32_t __cdecl sub_00081FA0(uint32_t interface_object,
                                                uint32_t index,
                                                uint32_t ignored_argument,
                                                uint32_t value_pointer)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 18h]
        lea eax, [edx + eax*8]
        movzx edx, word ptr [eax + 4]
        push edi
        push edx
        push ecx
        call dword ptr [eax]
        add esp, 0Ch
        neg eax
        sbb eax, eax
        pop edi
        and eax, esi
        pop esi
        ret
    }
}
