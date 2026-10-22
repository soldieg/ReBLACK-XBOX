__declspec(naked) void __cdecl sub_00013E20(void)
{
    __asm {
        add ecx, 1b0h
        push esi
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], esi
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        pop esi
        ret
    }
}