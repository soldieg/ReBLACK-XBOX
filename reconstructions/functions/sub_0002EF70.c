// _emit preserves absolute memory encodings that MSVC inline asm interprets as immediates.
__declspec(naked) unsigned int __cdecl sub_0002EF70(void)
{
    __asm {
        mov ecx, dword ptr [esp + 4]
        _emit 03bh
        _emit 00dh
        _emit 05ch
        _emit 02ah
        _emit 02bh
        _emit 000h
        jz done
        _emit 0a1h
        _emit 058h
        _emit 0f0h
        _emit 056h
        _emit 000h
        test eax, eax
        jnz write_value
        _emit 0a1h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
        mov dword ptr [eax * 4 + 0056f1e0h], 46h
        inc eax
        _emit 0c7h
        _emit 005h
        _emit 058h
        _emit 0f0h
        _emit 056h
        _emit 000h
        _emit 001h
        _emit 000h
        _emit 000h
        _emit 000h
        _emit 0a3h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
    write_value:
        mov eax, dword ptr [ecx * 4 + 00283c84h]
        _emit 0a3h
        _emit 078h
        _emit 0e9h
        _emit 056h
        _emit 000h
        _emit 089h
        _emit 00dh
        _emit 05ch
        _emit 02ah
        _emit 02bh
        _emit 000h
    done:
        mov eax, 1
        ret
    }
}
