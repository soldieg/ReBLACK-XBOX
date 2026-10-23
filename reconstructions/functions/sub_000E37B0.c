__declspec(naked) void __cdecl sub_000E37B0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [eax]
        movsx eax, byte ptr [esi + 8]
        test eax, eax
        lea ecx, [esi + 8]
        mov edx, 811c9dc5h
        jz short store_hash
    hash_next:
        inc ecx
        cmp eax, 5ah
        jg short hash_byte
        cmp eax, 41h
        jl short hash_byte
        add eax, 20h
    hash_byte:
        xor eax, edx
        imul eax, eax, 1000193h
        mov edx, eax
        movsx eax, byte ptr [ecx]
        test eax, eax
        jnz short hash_next
        test dx, dx
        jnz short store_hash
        mov eax, 4567h
        mov word ptr [esi + 6], ax
        pop esi
        ret
    store_hash:
        mov word ptr [esi + 6], dx
        pop esi
        ret
    }
}
