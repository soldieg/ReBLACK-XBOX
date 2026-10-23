__declspec(naked) void sub_00015A20(void)
{
    __asm {
        mov eax, dword ptr [ecx + 1A4h]
        cmp eax, -1h
        jz L_15A4C
        mov ecx, dword ptr [ecx + 118h]
        imul eax, eax, 0D0h
        add eax, dword ptr [ecx + 48h]
        test eax, eax
        jz L_15A4C
        mov ecx, dword ptr [eax + 54h]
        xor edx, edx
        cmp ecx, 7h
        setz dl
        mov eax, edx
        ret
        L_15A4C:
        xor eax, eax
        ret
    }
}
