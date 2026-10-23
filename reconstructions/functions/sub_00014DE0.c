__declspec(naked) void sub_00014DE0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 48h
        push esi
        mov eax, ecx
        push edi
        mov dword ptr [esp + 0Ch], eax
        mov esi, dword ptr [esp + 0Ch]
        mov edi, dword ptr [ebp + 0Ch]
        movss xmm0, dword ptr [esi]
        shufps xmm0, xmm0, 0h
        mulps xmm0, xmmword ptr [edi]
        movss xmm1, dword ptr [esi + 4h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 10h]
        addps xmm0, xmm1
        movss xmm1, dword ptr [esi + 8h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 20h]
        addps xmm0, xmm1
        movaps xmmword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [esi + 10h]
        shufps xmm0, xmm0, 0h
        mulps xmm0, xmmword ptr [edi]
        movss xmm1, dword ptr [esi + 14h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 10h]
        addps xmm0, xmm1
        movss xmm1, dword ptr [esi + 18h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 20h]
        addps xmm0, xmm1
        movaps xmmword ptr [esp + 20h], xmm0
        movss xmm0, dword ptr [esi + 20h]
        shufps xmm0, xmm0, 0h
        mulps xmm0, xmmword ptr [edi]
        movss xmm1, dword ptr [esi + 24h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 10h]
        addps xmm0, xmm1
        movss xmm1, dword ptr [esi + 28h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 20h]
        addps xmm0, xmm1
        movaps xmmword ptr [esp + 30h], xmm0
        movss xmm0, dword ptr [esi + 30h]
        shufps xmm0, xmm0, 0h
        mulps xmm0, xmmword ptr [edi]
        movss xmm1, dword ptr [esi + 34h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 10h]
        addps xmm0, xmm1
        movss xmm1, dword ptr [esi + 38h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [edi + 20h]
        addps xmm0, xmm1
        addps xmm0, xmmword ptr [edi + 30h]
        movaps xmmword ptr [esp + 40h], xmm0
        movaps xmm0, xmmword ptr [esp + 10h]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [esp + 20h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [esp + 30h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [esp + 40h]
        movaps xmmword ptr [eax + 30h], xmm0
        mov esi, eax
        mov eax, dword ptr [ebp + 8h]
        mov ecx, 10h
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8h
    }
}
