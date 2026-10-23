__declspec(naked) void __cdecl sub_000E5380(void)
{
    __asm {
        sub esp, 20h
        push esi
        mov esi, dword ptr [ecx]
        push edi
        add esi, dword ptr [edx]
        mov edi, dword ptr [edx + 4]
        mov dword ptr [esp + 8], esi
        mov esi, dword ptr [ecx + 4]
        add esi, edi
        mov edi, dword ptr [edx + 10h]
        mov dword ptr [esp + 0ch], esi
        mov esi, dword ptr [ecx + 10h]
        add esi, edi
        mov edi, dword ptr [edx + 14h]
        mov dword ptr [esp + 18h], esi
        mov esi, dword ptr [ecx + 14h]
        add esi, edi
        mov edi, dword ptr [edx + 8]
        mov dword ptr [esp + 1ch], esi
        mov esi, dword ptr [ecx + 8]
        add esi, edi
        mov edi, dword ptr [edx + 0ch]
        mov dword ptr [esp + 10h], esi
        mov esi, dword ptr [ecx + 0ch]
        add esi, edi
        mov edi, dword ptr [edx + 18h]
        mov dword ptr [esp + 14h], esi
        mov esi, dword ptr [ecx + 18h]
        mov ecx, dword ptr [ecx + 1ch]
        add esi, edi
        mov dword ptr [esp + 20h], esi
        add ecx, dword ptr [edx + 1ch]
        mov dword ptr [esp + 24h], ecx
        mov ecx, 8
        lea esi, [esp + 8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 20h
        ret
    }
}
