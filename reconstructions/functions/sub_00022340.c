__declspec(naked) void __cdecl sub_00022340(void)
{
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, eax
        mov ebx, dword ptr [edi + 70h]
        xor eax, eax
        test ebx, ebx
        jbe l22375
        mov ecx, dword ptr [edi + 78h]
        mov edx, dword ptr [ecx + 8h]
        ; Preserve the candidate's seven-byte zero-displacement LEA encoding.
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L22360:
        mov ecx, dword ptr [edx]
        test ecx, ecx
        jz l2236d
        mov ecx, dword ptr [ecx]
        cmp ecx, dword ptr [ebp]
        jz l2239c
L2236d:
        inc eax
        add edx, 4h
        cmp eax, ebx
        jc l22360
L22375:
        mov esi, dword ptr [edi + 74h]
        xor eax, eax
        test esi, esi
        jbe l22399
        mov edx, dword ptr [edi + 7ch]
        mov edx, dword ptr [edx + 8h]
L22384:
        mov ecx, dword ptr [edx]
        test ecx, ecx
        jz l22391
        mov ecx, dword ptr [ecx]
        cmp ecx, dword ptr [ebp]
        jz l223a3
L22391:
        inc eax
        add edx, 4h
        cmp eax, esi
        jc l22384
L22399:
        or eax, 0ffffffffh
L2239c:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4h
L223a3:
        pop edi
        pop esi
        pop ebp
        add eax, ebx
        pop ebx
        ret 4h
    }
}
