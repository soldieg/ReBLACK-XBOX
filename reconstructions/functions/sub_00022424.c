__declspec(naked) void __cdecl sub_00022424(void)
{
    __asm {
        mov eax, dword ptr [esp + 8h]
        mov ecx, dword ptr [esp + 0ch]
        movaps xmm2, xmmword ptr [eax]
        shufps xmm2, xmm2, 0h
        mulps xmm2, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [eax]
        shufps xmm1, xmm1, 55h
        mulps xmm1, xmmword ptr [ecx + 10h]
        movaps xmm0, xmmword ptr [eax]
        shufps xmm0, xmm0, 0aah
        mulps xmm0, xmmword ptr [ecx + 20h]
        addps xmm2, xmm1
        movaps xmm1, xmmword ptr [eax]
        shufps xmm1, xmm1, 0ffh
        mulps xmm1, xmmword ptr [ecx + 30h]
        addps xmm2, xmm0
        movaps xmm3, xmmword ptr [eax + 10h]
        shufps xmm3, xmm3, 0h
        addps xmm2, xmm1
        mulps xmm3, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [eax + 10h]
        shufps xmm1, xmm1, 55h
        mulps xmm1, xmmword ptr [ecx + 10h]
        movaps xmm0, xmmword ptr [eax + 10h]
        shufps xmm0, xmm0, 0aah
        mulps xmm0, xmmword ptr [ecx + 20h]
        addps xmm3, xmm1
        movaps xmm1, xmmword ptr [eax + 10h]
        shufps xmm1, xmm1, 0ffh
        mulps xmm1, xmmword ptr [ecx + 30h]
        addps xmm3, xmm0
        movaps xmm4, xmmword ptr [eax + 20h]
        shufps xmm4, xmm4, 0h
        addps xmm3, xmm1
        mulps xmm4, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [eax + 20h]
        shufps xmm1, xmm1, 55h
        mulps xmm1, xmmword ptr [ecx + 10h]
        movaps xmm0, xmmword ptr [eax + 20h]
        shufps xmm0, xmm0, 0aah
        mulps xmm0, xmmword ptr [ecx + 20h]
        addps xmm4, xmm1
        movaps xmm1, xmmword ptr [eax + 20h]
        shufps xmm1, xmm1, 0ffh
        mulps xmm1, xmmword ptr [ecx + 30h]
        addps xmm4, xmm0
        movaps xmm5, xmmword ptr [eax + 30h]
        shufps xmm5, xmm5, 0h
        addps xmm4, xmm1
        mulps xmm5, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [eax + 30h]
        shufps xmm1, xmm1, 55h
        mulps xmm1, xmmword ptr [ecx + 10h]
        movaps xmm0, xmmword ptr [eax + 30h]
        shufps xmm0, xmm0, 0aah
        mulps xmm0, xmmword ptr [ecx + 20h]
        addps xmm5, xmm1
        movaps xmm1, xmmword ptr [eax + 30h]
        shufps xmm1, xmm1, 0ffh
        mulps xmm1, xmmword ptr [ecx + 30h]
        mov ecx, dword ptr [esp + 4h]
        addps xmm5, xmm0
        addps xmm5, xmm1
        movaps xmmword ptr [ecx], xmm2
        movaps xmmword ptr [ecx + 10h], xmm3
        movaps xmmword ptr [ecx + 20h], xmm4
        movaps xmmword ptr [ecx + 30h], xmm5
        mov eax, dword ptr [esp + 4h]
        ret 0ch
    }
}
