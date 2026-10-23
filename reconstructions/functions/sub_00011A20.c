void __declspec(naked) sub_00011A20(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 0Ch
        movaps xmm1, xmmword ptr [ecx]
        lea edx, [esp + 8]
        movss dword ptr [esp + 8], xmm0
        movss xmm0, dword ptr [edx]
        push esi
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
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
        ret
    }
}
