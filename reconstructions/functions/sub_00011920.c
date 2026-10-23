void __declspec(naked) sub_00011920(void)
{
    __asm {
        mov edx, dword ptr [esp + 4]
        movaps xmm0, xmmword ptr [edx]
        movaps xmmword ptr [ecx], xmm0
        push esi
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
        ret 4
    }
}
