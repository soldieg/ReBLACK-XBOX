void __declspec(naked) sub_00011DD0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 18h
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0Ch]
        movaps xmm0, xmmword ptr [edi]
        subps xmm0, xmmword ptr [esi]
        movss xmm1, dword ptr [ebp + 10h]
        shufps xmm1, xmm1, 0
        mulps xmm0, xmm1
        addps xmm0, xmmword ptr [esi]
        movaps xmmword ptr [esp + 10h], xmm0
        mov edx, dword ptr [esp + 10h]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [esp + 1Ch]
        pop edi
        mov dword ptr [ecx + 0Ch], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
