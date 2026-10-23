__declspec(naked) void __cdecl sub_000E4F10(void)
{
    __asm {
        mov edx, dword ptr [ecx + 24h]
        sub esp, 8
        shl eax, 4
        mov ecx, dword ptr [eax + edx + 0ch]
        mov ecx, dword ptr [ecx + 10h]
        add eax, edx
        mov edx, dword ptr [ecx + 30h]
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        test edx, edx
        push edi
        jle short no_match
        mov ecx, dword ptr [ecx + 34h]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 10h], eax
        mov edi, ecx
        nop
    compare_entry:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esp + 10h]
    compare_pair:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz short mismatch
        test cl, cl
        jz short equal
        mov bl, byte ptr [eax + 1]
        mov cl, bl
        cmp bl, byte ptr [esi + 1]
        jnz short mismatch
        add eax, 2
        add esi, 2
        test cl, cl
        jnz short compare_pair
    equal:
        xor eax, eax
        jmp short compare_result
    mismatch:
        sbb eax, eax
        sbb eax, -1
    compare_result:
        test eax, eax
        jz short found
        inc ebp
        add edi, 8
        cmp ebp, edx
        jl short compare_entry
    no_match:
        pop edi
        pop esi
        pop ebp
        or eax, 0ffffffffh
        pop ebx
        add esp, 8
        ret
    found:
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [ecx + ebp*8 + 4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
