__declspec(naked) void sub_00015AE0(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8h]
        push ebp
        push esi
        mov esi, eax
        mov edx, dword ptr [esi + 30h]
        xor ecx, ecx
        test edx, edx
        push edi
        mov edi, dword ptr [esp + 18h]
        jle L_15B18
        mov eax, dword ptr [esi + 18h]
        ; Preserve the target 6-byte zero-displacement LEA encoding.
        _emit 08Dh
        _emit 09Bh
        _emit 00h
        _emit 00h
        _emit 00h
        _emit 00h
        L_15B00:
        mov ebp, dword ptr [eax + 8h]
        cmp ebp, ebx
        jnz L_15B0E
        mov ebp, dword ptr [eax + 0Ch]
        cmp ebp, edi
        jz L_15B3E
        L_15B0E:
        inc ecx
        add eax, 1D0h
        cmp ecx, edx
        jl L_15B00
        L_15B18:
        mov edx, dword ptr [esi + 34h]
        xor ecx, ecx
        test edx, edx
        jle L_15B3C
        mov eax, dword ptr [esi + 1Ch]
        L_15B24:
        mov esi, dword ptr [eax + 8h]
        cmp esi, ebx
        jnz L_15B32
        mov esi, dword ptr [eax + 0Ch]
        cmp esi, edi
        jz L_15B3E
        L_15B32:
        inc ecx
        add eax, 200h
        cmp ecx, edx
        jl L_15B24
        L_15B3C:
        xor eax, eax
        L_15B3E:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8h
    }
}
