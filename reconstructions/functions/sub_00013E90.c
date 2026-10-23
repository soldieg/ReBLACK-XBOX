__declspec(naked) void sub_00013E90(void)
{
    __asm {
        mov edx, dword ptr [esp + 4h]
        add ecx, 18h
        shl ecx, 4h
        add ecx, edx
        push esi
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4h]
        mov dword ptr [edx + 4h], esi
        mov esi, dword ptr [ecx + 8h]
        mov dword ptr [edx + 8h], esi
        mov ecx, dword ptr [ecx + 0Ch]
        mov dword ptr [edx + 0Ch], ecx
        pop esi
        ret 4h
    }
}
