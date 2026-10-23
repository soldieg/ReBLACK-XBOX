__declspec(naked) void sub_00014090(void)
{
    __asm {
        mov edx, dword ptr [ecx]
        push ebx
        push ebp
        push esi
        movzx esi, byte ptr [edx + 1h]
        xor al, al
        test esi, esi
        push edi
        jle L_140CB
        mov edx, dword ptr [edx + 4h]
        mov ebx, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        xor ecx, ecx
        ; Preserve the target's longer zero-displacement LEA encoding.
        _emit 08Dh
        _emit 049h
        _emit 00h
        L_140B0:
        shl ecx, 5h
        mov ebp, dword ptr [ecx + edx*1h]
        cmp ebp, edi
        jnz L_140C2
        mov ecx, dword ptr [ecx + edx*1h + 4h]
        cmp ecx, ebx
        jz L_140CD
        L_140C2:
        inc al
        movsx ecx, al
        cmp ecx, esi
        jl L_140B0
        L_140CB:
        or al, 0FFh
        L_140CD:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8h
    }
}
