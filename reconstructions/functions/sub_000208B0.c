__declspec(naked) void __cdecl sub_000208B0(void)
{
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        xor edi, edi
        mov ebx, eax
        xor esi, esi
        nop
L208C0:
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        lea eax, [edx + edx*4]
        shl eax, 1
        sub ecx, eax
        add ecx, 30h
        test edx, edx
        mov word ptr [esp + esi*2 + 10h], cx
        jz L20900
        mov ax, word ptr [esp + 38h]
        test ax, ax
        jz L208F5
        inc ebp
        cmp ebp, 3
        jnz L208F5
        xor ebp, ebp
        inc esi
        mov word ptr [esp + esi*2 + 10h], ax
L208F5:
        inc edi
        inc esi
        cmp edi, 0ch
        mov ecx, edx
        jl L208C0
        jmp L20902
L20900:
        inc edi
        inc esi
L20902:
        mov edx, dword ptr [esp + 34h]
        cmp edx, edi
        jle L20921
        sub edx, edi
        mov ecx, edx
        shr ecx, 1
        mov edi, ebx
        mov eax, 300030h
        rep stosd
        adc ecx, ecx
        ; Preserve the observed REP/operand-size prefix order used by the XBE.
        __emit 0x66
        __emit 0xF3
        __emit 0xAB
        lea ebx, [ebx + edx*2]
L20921:
        test esi, esi
        jle L20935
L20925:
        mov cx, word ptr [esp + esi*2 + 0eh]
        dec esi
        mov word ptr [ebx], cx
        add ebx, 2
        test esi, esi
        jg L20925
L20935:
        pop edi
        pop esi
        pop ebp
        mov word ptr [ebx], 0
        mov eax, ebx
        pop ebx
        add esp, 20h
        ret
    }
}
