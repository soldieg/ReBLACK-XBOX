#include <stdint.h>

extern uint32_t sub_0026689F(void);

/*
 * shortcut: preserve the observed incoming ECX/EAX and ten-stack-word ABI
 * with an exact emitter; replace when the helper chain has typed prototypes.
 */
__declspec(naked) uint32_t sub_00266A4A(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 2Ch]
        push edi
        lea eax, [esi + 10h]
        push eax
        mov al, byte ptr [ebp + 20h]
        lea edi, [esi + 0Ch]
        push edi
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 1Ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0Ch]
        push dword ptr [ebp + 8]
        call sub_0026689F
        test byte ptr [ebp + 16h], 1
        je short a4a_no_flag_clear
        and dword ptr [edi], 0FFFFFFF7h
a4a_no_flag_clear:
        mov ecx, dword ptr [ebp + 28h]
        and dword ptr [esi + 8], 0
        pop edi
        mov dword ptr [esi], 40001h
        mov dword ptr [esi + 4], ecx
        pop esi
        pop ebp
        ret 28h
    }
}
