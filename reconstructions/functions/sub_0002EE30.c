// _emit preserves absolute memory encodings that MSVC inline asm interprets as immediates.
__declspec(naked) unsigned int __cdecl sub_0002EE30(void)
{
    __asm {
        _emit 03bh
        _emit 00dh
        _emit 068h
        _emit 02ah
        _emit 02bh
        _emit 000h
        jz done
        _emit 0a1h
        _emit 08ch
        _emit 0f1h
        _emit 056h
        _emit 000h
        test eax, eax
        jnz write_value
        _emit 0a1h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
        mov dword ptr [eax * 4 + 0056f1e0h], 93h
        inc eax
        _emit 0c7h
        _emit 005h
        _emit 08ch
        _emit 0f1h
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
        mov eax, dword ptr [ecx * 4 + 00283c50h]
        _emit 0a3h
        _emit 0ach
        _emit 0eah
        _emit 056h
        _emit 000h
        _emit 089h
        _emit 00dh
        _emit 068h
        _emit 02ah
        _emit 02bh
        _emit 000h
    done:
        mov eax, 1
        ret
    }
}
