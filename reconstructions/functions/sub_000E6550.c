__declspec(naked) void __cdecl sub_000E6550(void)
{
    __asm {
        mov edx, dword ptr [eax]
        push esi
        xor esi, esi
        add edx, 8
    next_character:
        mov cl, byte ptr [edx]
        cmp cl, 7fh
        ja short multibyte
        movzx ecx, cl
        inc edx
        jmp short have_codepoint
    multibyte:
        mov al, cl
        and al, 0e0h
        cmp al, 0c0h
        jnz short check_three_byte
        xor eax, eax
        mov al, byte ptr [edx + 1]
        and ecx, 1fh
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        add edx, 2
        jmp short have_codepoint
    check_three_byte:
        mov al, cl
        and al, 0f0h
        cmp al, 0e0h
        jnz short four_byte
        xor eax, eax
        mov al, byte ptr [edx + 1]
        and ecx, 0fh
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        xor eax, eax
        mov al, byte ptr [edx + 2]
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        add edx, 3
        jmp short have_codepoint
    four_byte:
        xor eax, eax
        mov al, byte ptr [edx + 1]
        and ecx, 7
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        xor eax, eax
        mov al, byte ptr [edx + 2]
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        xor eax, eax
        mov al, byte ptr [edx + 3]
        shl ecx, 6
        and eax, 3fh
        or ecx, eax
        add edx, 4
    have_codepoint:
        test ecx, ecx
        jz short end_count
        inc esi
        jmp short next_character
    end_count:
        mov eax, esi
        pop esi
        ret
    }
}
