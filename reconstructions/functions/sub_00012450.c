__declspec(naked) void sub_00012450(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 58h
        mov edx, dword ptr [ebp + 8h]
        push esi
        push edi
        mov ecx, 10h
        mov esi, edx
        lea edi, [esp + 20h]
        rep movsd
        mov esi, dword ptr [ebp + 8h]
        lea edi, [esp + 20h]
        mov eax, dword ptr [edi + 10h]
        mov ecx, dword ptr [edi + 20h]
        mov dword ptr [esi + 4h], eax
        mov dword ptr [esi + 8h], ecx
        mov eax, dword ptr [edi + 4h]
        mov ecx, dword ptr [edi + 24h]
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 18h], ecx
        mov eax, dword ptr [edi + 8h]
        mov ecx, dword ptr [edi + 18h]
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 24h], ecx
        movss xmm0, dword ptr [esi + 30h]
        movss xmm1, dword ptr [esi + 34h]
        movss xmm2, dword ptr [esi + 38h]
        shufps xmm0, xmm0, 0h
        shufps xmm1, xmm1, 0h
        shufps xmm2, xmm2, 0h
        mulps xmm0, xmmword ptr [esi]
        mulps xmm1, xmmword ptr [esi + 10h]
        mulps xmm2, xmmword ptr [esi + 20h]
        addps xmm0, xmm1
        addps xmm0, xmm2
        movaps xmmword ptr [esi + 30h], xmm0
        lea eax, [edx + 30h]
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 8h], 80000000h
        mov esi, dword ptr [esp + 0ch]
        movss xmm0, dword ptr [esp + 8h]
        shufps xmm0, xmm0, 0h
        xorps xmm0, xmmword ptr [esi]
        movaps xmmword ptr [esp + 10h], xmm0
        movaps xmm0, xmmword ptr [esp + 10h]
        pop edi
        movaps xmmword ptr [eax], xmm0
        pop esi
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
