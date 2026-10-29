__declspec(naked) void __cdecl sub_000F8A20(void)
{
    __asm {
        push esi
        mov esi, eax
        mov ecx, dword ptr [esi + 4]
        mov eax, ecx
        sar eax, 19h
        cmp eax, 0Ch
        jl L_f8a3f
        cmp eax, 13h
        jg L_f8a3f
        shr ecx, 4
        not cl
        test cl, 1
        jz L_f8a82
L_f8a3f:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 10h]
        test al, al
        jnz L_f8a82
        mov ecx, dword ptr [esi + 4]
        mov eax, ecx
        sar eax, 19h
        cmp eax, 1
        jz L_f8a5c
        cmp eax, 2Ah
        jnz L_f8a84
L_f8a5c:
        shr ecx, 4
        not cl
        test cl, 1
        jnz L_f8a84
        cmp eax, 1
        jz L_f8a6e
        mov esi, dword ptr [esi + 20h]
L_f8a6e:
        mov ecx, dword ptr [esp + 0Ch]
        mov edx, dword ptr [esp + 8]
        lea eax, [esi + 8]
        _emit 0xE8
        _emit 0xB2
        _emit 0xE3
        _emit 0xFF
        _emit 0xFF
        mov dword ptr [edi], eax
        pop esi
        ret
L_f8a82:
        mov dword ptr [edi], esi
L_f8a84:
        pop esi
        ret
    }
}
