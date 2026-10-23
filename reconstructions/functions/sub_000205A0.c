__declspec(naked) void __cdecl sub_000205A0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 1ch
        push esi
        movsx esi, byte ptr [ecx + 0ah]
        cvtsi2ss xmm0, esi
        movsx esi, byte ptr [ecx + 0bh]
        movss dword ptr [esp + 10h], xmm0
        cvtsi2ss xmm0, esi
        movsx esi, byte ptr [ecx + 0ch]
        mov ecx, dword ptr [ecx + 04h]
        movss dword ptr [esp + 14h], xmm0
        cvtsi2ss xmm0, esi
        movss dword ptr [esp + 18h], xmm0
        ; Keep the disp32 load encoding: the inline assembler adds a DS prefix for absolute operands.
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x84
        __emit 0x5D
        __emit 0x29
        __emit 0x00
        movaps xmm1, xmmword ptr [esp + 10h]
        movss dword ptr [esp + 08h], xmm0
        lea edx, [edx + edx*2]
        lea ecx, [ecx + edx*2]
        movzx edx, word ptr [ecx]
        lea esi, [esp + 08h]
        movss xmm0, dword ptr [esi]
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
        cvtsi2ss xmm0, edx
        movzx edx, word ptr [ecx + 02h]
        movzx ecx, word ptr [ecx + 04h]
        movss dword ptr [esp + 10h], xmm0
        cvtsi2ss xmm0, edx
        movss dword ptr [esp + 14h], xmm0
        cvtsi2ss xmm0, ecx
        movss dword ptr [esp + 18h], xmm0
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x80
        __emit 0x5D
        __emit 0x29
        __emit 0x00
        movaps xmm3, xmmword ptr [esp + 10h]
        movss dword ptr [esp + 0ch], xmm0
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x8C
        __emit 0x5D
        __emit 0x29
        __emit 0x00
        lea ecx, [esp + 0ch]
        movss xmm2, dword ptr [ecx]
        movss dword ptr [esp + 08h], xmm0
        lea edx, [esp + 08h]
        movss xmm0, dword ptr [edx]
        shufps xmm2, xmm2, 0
        divps xmm3, xmm2
        shufps xmm0, xmm0, 0
        mulps xmm3, xmm0
        addps xmm3, xmm1
        movaps xmmword ptr [eax], xmm3
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
