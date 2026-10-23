__declspec(naked) void sub_000130B0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [esp + 0ch], 80000000h
        mov esi, dword ptr [ebp + 8h]
        movss xmm0, dword ptr [esp + 0ch]
        shufps xmm0, xmm0, 0h
        xorps xmm0, xmmword ptr [esi]
        movaps xmmword ptr [esp + 10h], xmm0
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 18h]
        xorps xmm0, xmm0
        mov dword ptr [esp + 1ch], edi
        subss xmm0, dword ptr [esp + 1ch]
        mov edi, eax
        mov dword ptr [edi], ecx
        mov dword ptr [edi + 4h], edx
        mov dword ptr [edi + 8h], esi
        movss dword ptr [esp + 1ch], xmm0
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [edi + 0ch], ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
