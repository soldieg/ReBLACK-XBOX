__declspec(naked) void __cdecl sub_000E7210(void)
{
    __asm {
    function_entry:
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        sar eax, 19h
        add eax, -0ch
        cmp eax, 6
        push edi
        mov edi, dword ptr [esp + 0ch]
        ja short dispatch_done
        jmp dword ptr [eax*4 + 0e7294h]
    count_type_12:
        inc dword ptr [edi + 18h]
        jmp short dispatch_done
    count_type_13:
        inc dword ptr [edi + 4]
        jmp short dispatch_done
    count_type_0f:
        inc dword ptr [edi + 10h]
        jmp short dispatch_done
    count_type_10:
        inc dword ptr [edi + 0ch]
        jmp short dispatch_done
    count_type_11:
        inc dword ptr [edi + 14h]
        jmp short dispatch_done
    count_type_12b:
        inc dword ptr [edi]
    dispatch_done:
        mov edx, dword ptr [esi + 4]
        mov eax, edx
        sar eax, 19h
        cmp eax, 0dh
        jnz short check_type_12
        mov ecx, edx
        shr ecx, 4
        not cl
        test cl, 1
        jz short walk_children
    check_type_12:
        cmp eax, 12h
        jnz short done
        shr edx, 4
        not dl
        test dl, 1
        jnz short done
    walk_children:
        mov edx, dword ptr [esi + 48h]
        mov eax, dword ptr [edx + 24h]
        mov esi, dword ptr [eax]
        test esi, esi
        jz short done
        __emit 08Dh
        __emit 064h
        __emit 024h
        __emit 000h
    child_loop:
        push edi
        mov ecx, esi
        call function_entry
        mov esi, dword ptr [esi + 50h]
        test esi, esi
        jnz short child_loop
    done:
        pop edi
        pop esi
        ret 4
    }
}
