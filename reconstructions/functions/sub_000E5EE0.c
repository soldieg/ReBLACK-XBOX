__declspec(naked) void __cdecl sub_000E5EE0(void)
{
    __asm {
        push esi
        mov esi, eax
    scan_node:
        mov edx, dword ptr [esi + 4]
        mov ecx, edx
        sar ecx, 19h
        cmp ecx, 12h
        jnz short check_type_13
        mov eax, edx
        shr eax, 4
        not al
        test al, 1
        jz short found_node
    check_type_13:
        cmp ecx, 13h
        jnz short next_node
        shr edx, 4
        not dl
        test dl, 1
        jz short found_node
    next_node:
        mov esi, dword ptr [esi + 44h]
        jmp short scan_node
    found_node:
        mov eax, esi
        pop esi
        ret
    }
}
