__declspec(naked) void sub_00015910(void)
{
    __asm {
        mov eax, dword ptr [eax + 0C4h]
        cmp eax, 1h
        jz L_15923
        cmp eax, 2h
        jz L_15923
        xor eax, eax
        ret
        L_15923:
        mov eax, 1h
        ret
    }
}
