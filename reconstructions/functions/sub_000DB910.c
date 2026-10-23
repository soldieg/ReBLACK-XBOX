/* Exact x86 body; callers pass the object in ECX and test AL on return. */
__declspec(naked) unsigned char sub_000DB910(void)
{
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0Ch]
        push edi
        mov edi, dword ptr [esi + 8]
        xor ecx, ecx
        test edi, edi
        mov al, 1
        jle L_done
        xor edx, edx
    L_loop:
        test al, al
        jz L_done
        mov eax, dword ptr [esi + 0Ch]
        mov eax, dword ptr [eax + edx + 58h]
        mov al, byte ptr [eax + 8Ch]
        shr al, 1
        and al, 1
        inc ecx
        add edx, 70h
        cmp ecx, edi
        jl L_loop
    L_done:
        pop edi
        pop esi
        ret
    }
}
