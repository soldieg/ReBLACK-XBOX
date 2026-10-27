/* Instruction-level reconstruction from the verified Ghidra body. */
__declspec(naked) unsigned int sub_000BAA00(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [eax + 240h]
        push ebp
        push esi
        push edi
        xor edi, edi
        xor esi, esi
        xor ebp, ebp
        test ebx, ebx
        jle empty
        lea edx, [eax + 4]
        jmp scan
        _emit 08Dh
        _emit 049h
        _emit 000h ; three-byte alignment NOP in the verified split span
scan:
        mov al, byte ptr [edx + 4]
        test al, al
        lea ecx, [edx - 4]
        jz inspect_zero
        mov eax, dword ptr [edx]
        cmp edi, eax
        jae compare_current
        mov esi, ecx
        mov edi, eax
        jmp advance
compare_current:
        test esi, esi
        jnz advance
        test eax, eax
        jnz advance
        mov esi, ecx
        mov edi, eax
        jmp advance
inspect_zero:
        cmp dword ptr [ecx], 0
        jne return_current
advance:
        inc ebp
        add edx, 0Ch
        cmp ebp, ebx
        jl scan
        test esi, esi
        jz empty
        mov edi, dword ptr [esi]
        mov eax, dword ptr [edi + 38h]
        push 0
        push eax
        call $ + 5 - 2CB42h
        mov ecx, dword ptr [edi + 38h]
        push 0
        push ecx
        call $ + 5 - 2C92Dh
        add esp, 10h
        mov eax, 1
        and word ptr [edi + 30h], ax
        mov byte ptr [edi + 2Ch], 0
        pop edi
        mov byte ptr [esi + 8], al
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 4], 0
        pop esi
        pop ebp
        pop ebx
        ret
return_current:
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        pop ebp
        mov byte ptr [ecx + 8], 1
        mov dword ptr [ecx + 4], 0
        pop ebx
        ret
empty:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

