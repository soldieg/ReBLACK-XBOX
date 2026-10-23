__declspec(naked) unsigned char __cdecl sub_000E5880(void)
{
    __asm {
        push ebx
        push esi
        mov ebx, ecx
        test bl, 3
        push edi
        mov esi, edx
        mov edi, ebx
        jz aligned
        and edi, 0fffffffch
        add edi, 4
    aligned:
        mov edx, dword ptr [eax + 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 13h]
        and ecx, 0fh
        cmp edi, ecx
        cmovb edi, ecx
        mov ecx, dword ptr [eax + 0ch]
        dec edx
        cmp edi, ecx
        mov dword ptr [eax + 18h], edx
        jbe keep_block
        mov edx, dword ptr [esi - 8]
        lea ecx, [esi - 8]
        add ebx, 8
        test edx, edx
        jz check_previous
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], esi
    check_previous:
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        jz check_tail
        mov esi, dword ptr [ecx]
        mov dword ptr [edx], esi
    check_tail:
        cmp dword ptr [eax + 14h], ecx
        jnz release_block
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 14h], edx
    release_block:
        push ebx
        push ecx
        __emit 0ffh
        __emit 015h
        __emit 060h
        __emit 02bh
        __emit 056h
        __emit 000h
        add esp, 8
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret
    keep_block:
        mov edx, esi
        // shortcut: raw rel32 assumes the original mapped image layout; recheck on Xbox link.
        __emit 0e8h
        __emit 021h
        __emit 0c5h
        __emit 0ffh
        __emit 0ffh
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret
    }
}
