#include <stdint.h>

extern uint32_t sub_00266A4A(void);

/*
 * shortcut: retain the observed ECX plus ten-stack-argument helper ABI with
 * an exact emitter; replace when MSVC can express that free-function ABI.
 * The wrapper receives nine stack words, forwards [EBP+0x0C] in ECX, returns
 * the helper's EAX, and pops 0x24 bytes. Register-preserving semantic types
 * are not established by the caller evidence yet.
 */
__declspec(naked) uint32_t sub_00266A93(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 20h]
        mov ecx, dword ptr [ebp + 0Ch]
        push dword ptr [ebp + 24h]
        push 0
        push 0
        push dword ptr [ebp + 28h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push 1
        push dword ptr [ebp + 8]
        call sub_00266A4A
        pop ebp
        ret 24h
    }
}
