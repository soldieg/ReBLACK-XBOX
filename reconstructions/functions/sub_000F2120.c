__declspec(naked) void __cdecl sub_000F2120(void)
{
    __asm {
        mov eax, dword ptr [edi + 4]
        test eax, eax
        jz done
        mov eax, dword ptr [edi]
        push ebx
        xor ebx, ebx
        test eax, eax
        jle cleanup_entries
        push esi
    entry_loop:
        mov ecx, dword ptr [edi + 4]
        lea eax, [ebx*8]
        mov edx, dword ptr [ecx + eax]
        add ecx, eax
        test edx, edx
        jz next_entry
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        jz decrement_reference
        mov dword ptr [ecx + 4], 0
    decrement_reference:
        mov esi, dword ptr [edi + 4]
        mov edx, dword ptr [esi + eax]
        add esi, eax
        dec word ptr [edx]
        cmp word ptr [edx], 0
        jnz clear_entry
        movzx ecx, word ptr [edx + 4]
        mov eax, dword ptr [002ec9ach]
        add ecx, 9
        // shortcut: raw rel32 assumes the original mapped image layout; recheck on Xbox link.
        __emit 0e8h
        __emit 00ch
        __emit 037h
        __emit 0ffh
        __emit 0ffh
    clear_entry:
        mov dword ptr [esi], 0
    next_entry:
        mov eax, dword ptr [edi]
        inc ebx
        cmp ebx, eax
        jl entry_loop
        pop esi
    cleanup_entries:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [002ec9ach]
        shl ecx, 3
        __emit 0e8h
        __emit 0ech
        __emit 036h
        __emit 0ffh
        __emit 0ffh
        mov dword ptr [edi + 4], 0
        pop ebx
    done:
        ret
    }
}
