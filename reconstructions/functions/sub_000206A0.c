__declspec(naked) void __cdecl sub_000206A0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 68h
        push esi
        push edi
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8h]
        movss xmm0, dword ptr [edx]
        __emit 0xF3
        __emit 0x0F
        __emit 0x59
        __emit 0x05
        __emit 0x8C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        movss xmm2, dword ptr [edx + 4h]
        movaps xmm3, xmmword ptr [ecx + 20h]
        movss dword ptr [esp + 0ch], xmm0
        movaps xmm5, xmmword ptr [ecx]
        movaps xmm4, xmmword ptr [ecx + 30h]
        movss xmm1, dword ptr [esi]
        mulss xmm0, xmm1
        movss xmm6, dword ptr [esi + 4h]
        movss dword ptr [esp + 24h], xmm2
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x15
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        movaps xmm1, xmm2
        subss xmm1, xmm0
        movss dword ptr [esp + 8h], xmm1
        lea edx, [esp + 8h]
        movss xmm0, dword ptr [edx]
        shufps xmm0, xmm0, 0h
        mulps xmm3, xmm0
        lea edx, [esp + 0ch]
        movss xmm0, dword ptr [edx]
        shufps xmm0, xmm0, 0h
        mulps xmm5, xmm0
        addps xmm5, xmm3
        xorps xmm3, xmm3
        movaps xmmword ptr [esp + 10h], xmm5
        movss xmm0, dword ptr [esp + 10h]
        movss dword ptr [esp + 30h], xmm0
        movss xmm0, dword ptr [esp + 14h]
        movss dword ptr [esp + 40h], xmm0
        movss xmm0, dword ptr [esp + 18h]
        movss dword ptr [esp + 50h], xmm0
        movaps xmm0, xmm4
        mulps xmm0, xmm5
        movaps xmm5, xmm0
        shufps xmm5, xmm0, 39h
        addss xmm0, xmm5
        movss dword ptr [esp + 8h], xmm3
        movaps xmm7, xmm5
        shufps xmm7, xmm5, 39h
        movaps xmm5, xmmword ptr [ecx + 20h]
        addss xmm0, xmm7
        lea edx, [esp + 8h]
        movss dword ptr [edx], xmm0
        addss xmm1, dword ptr [esp + 8h]
        movaps xmm0, xmm2
        subss xmm0, xmm1
        movss dword ptr [esp + 60h], xmm0
        movss xmm0, dword ptr [esp + 24h]
        __emit 0xF3
        __emit 0x0F
        __emit 0x59
        __emit 0x05
        __emit 0x8C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        mulss xmm6, xmm0
        movss dword ptr [esp + 8h], xmm0
        lea edx, [esp + 0ch]
        addss xmm6, xmm2
        movss dword ptr [esp + 0ch], xmm6
        movss xmm0, dword ptr [edx]
        shufps xmm0, xmm0, 0h
        movaps xmm1, xmm5
        mulps xmm1, xmm0
        movaps xmm7, xmm1
        movaps xmm1, xmmword ptr [ecx + 10h]
        lea edx, [esp + 8h]
        movss xmm0, dword ptr [edx]
        shufps xmm0, xmm0, 0h
        mulps xmm1, xmm0
        addps xmm1, xmm7
        movaps xmmword ptr [esp + 10h], xmm1
        movss xmm0, dword ptr [esp + 10h]
        movss dword ptr [esp + 34h], xmm0
        movss xmm0, dword ptr [esp + 14h]
        movss dword ptr [esp + 44h], xmm0
        movss xmm0, dword ptr [esp + 18h]
        movss dword ptr [esp + 54h], xmm0
        movaps xmm0, xmm4
        mulps xmm0, xmm1
        movss dword ptr [esp + 8h], xmm3
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 39h
        addss xmm0, xmm1
        movaps xmm7, xmm1
        shufps xmm7, xmm1, 39h
        addss xmm0, xmm7
        lea edx, [esp + 8h]
        movss dword ptr [edx], xmm0
        movss xmm0, dword ptr [ecx + 20h]
        addss xmm6, dword ptr [esp + 8h]
        movss dword ptr [esp + 38h], xmm0
        movss xmm0, dword ptr [ecx + 24h]
        movss dword ptr [esp + 48h], xmm0
        movss xmm0, dword ptr [ecx + 28h]
        mulps xmm4, xmm5
        movss dword ptr [esp + 58h], xmm0
        movaps xmm0, xmm4
        shufps xmm0, xmm4, 39h
        movaps xmm1, xmm0
        lea ecx, [esp + 8h]
        movss dword ptr [esp + 8h], xmm3
        shufps xmm1, xmm0, 39h
        addss xmm4, xmm0
        addss xmm4, xmm1
        movss dword ptr [ecx], xmm4
        subss xmm3, dword ptr [esp + 8h]
        subss xmm2, xmm6
        mov ecx, 10h
        lea esi, [esp + 30h]
        mov edi, eax
        movss dword ptr [esp + 64h], xmm2
        movss dword ptr [esp + 68h], xmm3
        rep movsd
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8h
    }
}
