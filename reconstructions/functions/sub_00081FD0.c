/* Exact Xbox x86 body for sub_00081FD0 at VA 0x00081FD0.
 * The callback remains indirect; this source preserves its observed ABI and effects.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 */
#include <stdint.h>
__declspec(naked) uint32_t __cdecl sub_00081FD0(uint32_t interface_object,
                                                uint32_t index,
                                                uint32_t ignored_argument,
                                                uint32_t value_pointer)
{
    __asm {
        mov edx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 8]
        lea eax, [ecx + edx*8]
        movzx ecx, word ptr [eax + 4]
        mov edx, dword ptr [esp + 14h]
        push edx
        push ecx
        mov ecx, dword ptr [esi]
        push ecx
        call dword ptr [eax]
        add esp, 0Ch
        neg eax
        sbb eax, eax
        and eax, esi
        pop esi
        ret
    }
}
