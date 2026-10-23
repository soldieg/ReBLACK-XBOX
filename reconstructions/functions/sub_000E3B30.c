__declspec(naked) void __cdecl sub_000E3B30(void)
{
    __asm {
        push ebx
        ; Absolute DS load has no prefix in the target; MSVC adds one for a qualified operand.
        __emit 08ah
        __emit 01dh
        __emit 0a8h
        __emit 0c9h
        __emit 02eh
        __emit 000h
        push esi
        mov esi, dword ptr [eax + 4]
        push edi
        ; Keep the target's four-byte zero-displacement LEA encoding.
        __emit 08dh
        __emit 064h
        __emit 024h
        __emit 000h
    scan_entry:
        lea edi, [esi + 0ch]
        mov eax, edi
    check_end:
        cmp eax, edi
        jc short scan_end
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        sub ecx, edx
        lea edx, [ecx + esi + 0ch]
        cmp eax, edx
        jnc short scan_end
        movzx edx, bl
        cmp edx, 4
        jnz short check_zero_mode
        mov cl, byte ptr [eax + 4]
        jmp short test_flag
    check_zero_mode:
        test edx, edx
        jnz short advance
        mov cl, byte ptr [eax]
    test_flag:
        and cl, 1
        test cl, cl
        jnz short found
    advance:
        cmp edx, 4
        jnz short advance_zero_mode
        mov ecx, dword ptr [eax + 4]
        and ecx, 0fffffffeh
        add eax, ecx
        jmp short check_end
    advance_zero_mode:
        test edx, edx
        jnz short advance_invalid_mode
        mov ecx, dword ptr [eax]
        and ecx, 0fffffffeh
        add eax, ecx
        jmp short check_end
    advance_invalid_mode:
        xor ecx, ecx
        add eax, ecx
        jmp short check_end
    scan_end:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz short scan_entry
        xor eax, eax
    found:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
