__declspec(naked) void sub_00012670(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 18h
        push esi
        push edi
        mov esi, dword ptr [ebp + 8h]
        mov edi, dword ptr [ebp + 0ch]
        movss xmm0, dword ptr [edi]
        shufps xmm0, xmm0, 0h
        mulps xmm0, xmmword ptr [esi]
        movss xmm1, dword ptr [edi + 4h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [esi + 10h]
        addps xmm0, xmm1
        movss xmm1, dword ptr [edi + 8h]
        shufps xmm1, xmm1, 0h
        mulps xmm1, xmmword ptr [esi + 20h]
        addps xmm0, xmm1
        movaps xmmword ptr [esp + 10h], xmm0
        mov edx, dword ptr [esp + 10h]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 4h], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 8h], edx
        mov edx, dword ptr [esp + 1ch]
        pop edi
        mov dword ptr [ecx + 0ch], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
