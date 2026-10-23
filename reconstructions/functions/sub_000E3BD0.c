__declspec(naked) void __cdecl sub_000E3BD0(void)
{
    __asm {
        mov eax, dword ptr [eax + 4]
        sar eax, 19h
        dec eax
        cmp eax, 2bh
        ja short invalid_type
        movzx ecx, byte ptr [eax + 0e3bf8h]
        jmp dword ptr [ecx*4 + 0e3bf0h]
        mov al, 1
        ret
    invalid_type:
        xor al, al
        ret
    }
}
