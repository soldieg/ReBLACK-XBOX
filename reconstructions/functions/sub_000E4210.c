__declspec(naked) void __cdecl sub_000E4210(void)
{
    __asm {
        push edi
        mov edi, dword ptr [eax + 4]
        test edi, edi
        jnz short scan_slots
        xor eax, eax
        pop edi
        ret
    scan_slots:
        push esi
        mov esi, dword ptr [eax]
        xor ecx, ecx
        test esi, esi
        jle short no_slot
        mov edx, edi
    scan_entry:
        mov eax, dword ptr [edx]
        test eax, eax
        jz short next_slot
        cmp eax, 2ac7ech
        jnz short found_slot
    next_slot:
        inc ecx
        add edx, 8
        cmp ecx, esi
        jl short scan_entry
    no_slot:
        pop esi
        xor eax, eax
        pop edi
        ret
    found_slot:
        pop esi
        lea eax, [edi + ecx*8]
        pop edi
        ret
    }
}
