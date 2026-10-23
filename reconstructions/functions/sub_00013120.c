__declspec(naked) void sub_00013120(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 2ch
        movss xmm0, dword ptr [ecx]
        movss xmm3, dword ptr [edx + 0ch]
        movss dword ptr [esp + 0ch], xmm0
        movss xmm0, dword ptr [ecx + 4h]
        movss dword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [ecx + 8h]
        movss dword ptr [esp + 14h], xmm0
        movss xmm0, dword ptr [edx]
        movaps xmm1, xmmword ptr [esp + 0ch]
        movss dword ptr [esp + 1ch], xmm0
        movss xmm0, dword ptr [edx + 4h]
        movss dword ptr [esp + 20h], xmm0
        movss xmm0, dword ptr [edx + 8h]
        movss dword ptr [esp + 8h], xmm3
        movss dword ptr [esp + 24h], xmm0
        movaps xmm4, xmmword ptr [esp + 1ch]
        push esi
        lea esi, [esp + 0ch]
        movss xmm3, dword ptr [esi]
        shufps xmm3, xmm3, 0h
        movaps xmm5, xmm1
        mulps xmm5, xmm3
        movss xmm3, dword ptr [ecx + 0ch]
        movss dword ptr [esp + 0ch], xmm3
        lea esi, [esp + 0ch]
        movss xmm6, dword ptr [esi]
        shufps xmm6, xmm6, 0h
        movaps xmm0, xmm1
        shufps xmm0, xmm1, 0c9h
        movaps xmm3, xmm4
        mulps xmm3, xmm6
        movaps xmm6, xmm0
        shufps xmm6, xmm0, 0c9h
        addps xmm3, xmm5
        movaps xmm2, xmm4
        shufps xmm2, xmm4, 0d2h
        mulps xmm0, xmm2
        movaps xmm5, xmm2
        shufps xmm5, xmm2, 0d2h
        movss xmm2, dword ptr [edx + 0ch]
        mulps xmm6, xmm5
        subps xmm0, xmm6
        addps xmm3, xmm0
        xorps xmm0, xmm0
        movss dword ptr [esp + 0ch], xmm0
        mulps xmm1, xmm4
        movaps xmmword ptr [esp + 20h], xmm3
        movaps xmm0, xmm1
        shufps xmm0, xmm1, 39h
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 39h
        addss xmm1, xmm0
        movss xmm0, dword ptr [esp + 20h]
        movss dword ptr [ecx], xmm0
        movss xmm0, dword ptr [esp + 24h]
        movss dword ptr [ecx + 4h], xmm0
        movss xmm0, dword ptr [esp + 28h]
        movss dword ptr [ecx + 8h], xmm0
        movss xmm0, dword ptr [ecx + 0ch]
        lea edx, [esp + 0ch]
        addss xmm1, xmm3
        movss dword ptr [edx], xmm1
        mulss xmm0, xmm2
        subss xmm0, dword ptr [esp + 0ch]
        movss dword ptr [ecx + 0ch], xmm0
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4h]
        mov dword ptr [edx + 4h], esi
        mov esi, dword ptr [ecx + 8h]
        mov dword ptr [edx + 8h], esi
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
