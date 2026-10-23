__declspec(naked) void __cdecl sub_000223B0(void)
{
    __asm {
        sub esp, 8h
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], ebx
        mov edi, 1h
        xor ebp, ebp
        mov eax, 3fh
        ; Preserve the three-byte zero-displacement LEA encoding.
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L223d0:
        mov esi, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 24h]
        mov ecx, edi
        and ecx, esi
        mov esi, ebx
        and esi, edx
        or ecx, esi
        jz l22406
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + 8h]
        mov ecx, dword ptr [edx + ebp*1h]
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [edx + ebp*1h + 4h]
        or esi, ecx
        mov ecx, dword ptr [esp + 14h]
        or ecx, edx
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], ecx
L22406:
        shld ebx, edi, 1h
        add ebp, 8h
        shl edi, 1h
        dec eax
        jnz l223d0
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8h
        ret 0ch
    }
}
