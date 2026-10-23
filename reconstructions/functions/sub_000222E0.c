__declspec(naked) void __cdecl sub_000222E0(void)
{
    __asm {
        push ebx
        push esi
        mov esi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 4ch]
        test al, al
        jz l22322
L222f0:
        mov edx, dword ptr [esi + 64h]
        mov ecx, edx
        shl ecx, 4h
L222f8:
        dec edx
        sub ecx, 10h
        test edx, edx
        jl l22327
        mov eax, dword ptr [esi + 60h]
        mov ebx, dword ptr [eax + ecx*1h + 8h]
        add eax, ecx
        cmp ebx, edi
        jnz l222f8
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        jz l22327
        mov esi, eax
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 4ch]
        test al, al
        jnz l222f0
L22322:
        pop esi
        xor al, al
        pop ebx
        ret
L22327:
        pop esi
        mov al, 1h
        pop ebx
        ret
    }
}
