__declspec(naked) int __cdecl sub_000E7610(void *node)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 4]
        mov eax, ecx
        sar eax, 19h
        cmp eax, 0dh
        jnz check_type_12
        mov edx, ecx
        shr edx, 4
        not dl
        test dl, 1
        jz set_flag
    check_type_12:
        cmp eax, 12h
        jnz done
        shr ecx, 4
        not cl
        test cl, 1
        jnz done
    set_flag:
        mov eax, dword ptr [esi + 48h]
        or dword ptr [eax + 1ch], 02000000h
    done:
        mov eax, dword ptr [002ec9bch]
        pop esi
        ret
    }
}
