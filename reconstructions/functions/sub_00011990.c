void __declspec(naked) sub_00011990(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 0Ch
        movaps xmm1, xmmword ptr [ecx]
        mov edx, dword ptr [ebp + 8]
        movaps xmm0, xmmword ptr [edx]
        push esi
        subps xmm1, xmm0
        movaps xmmword ptr [ecx], xmm1
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], esi
        mov ecx, dword ptr [ecx + 0Ch]
        mov dword ptr [edx + 0Ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}
