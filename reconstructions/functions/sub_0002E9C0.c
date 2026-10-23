// _emit preserves absolute memory encodings that MSVC inline asm interprets as immediates.
__declspec(naked) void __cdecl sub_0002E9C0(void)
{
    __asm {
        _emit 0a1h
        _emit 074h
        _emit 02ah
        _emit 02bh
        _emit 000h
        cmp eax, dword ptr [esp + 4]
        _emit 00fh
        _emit 085h
        _emit 081h
        _emit 000h
        _emit 000h
        _emit 000h
        xor ecx, ecx
        cmp eax, ecx
        _emit 074h
        _emit 07bh
        _emit 039h
        _emit 00dh
        _emit 064h
        _emit 02ah
        _emit 02bh
        _emit 000h
        _emit 089h
        _emit 00dh
        _emit 030h
        _emit 0efh
        _emit 056h
        _emit 000h
        _emit 074h
        _emit 067h
        _emit 039h
        _emit 00dh
        _emit 060h
        _emit 02ah
        _emit 02bh
        _emit 000h
        _emit 075h
        _emit 059h
        _emit 039h
        _emit 00dh
        _emit 02ch
        _emit 0f0h
        _emit 056h
        _emit 000h
        mov eax, 1
        _emit 075h
        _emit 01dh
        _emit 08bh
        _emit 015h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
        mov dword ptr [edx * 4 + 0056f1e0h], 3bh
        inc edx
        _emit 0a3h
        _emit 02ch
        _emit 0f0h
        _emit 056h
        _emit 000h
        _emit 089h
        _emit 015h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
    set_second:
        _emit 039h
        _emit 00dh
        _emit 030h
        _emit 0f0h
        _emit 056h
        _emit 000h
        _emit 089h
        _emit 00dh
        _emit 04ch
        _emit 0e9h
        _emit 056h
        _emit 000h
        _emit 075h
        _emit 01bh
        _emit 0a3h
        _emit 030h
        _emit 0f0h
        _emit 056h
        _emit 000h
        _emit 0a1h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
        mov dword ptr [eax * 4 + 0056f1e0h], 3ch
        inc eax
        _emit 0a3h
        _emit 020h
        _emit 0efh
        _emit 056h
        _emit 000h
    clear_flags:
        _emit 089h
        _emit 00dh
        _emit 050h
        _emit 0e9h
        _emit 056h
        _emit 000h
        _emit 089h
        _emit 00dh
        _emit 064h
        _emit 02ah
        _emit 02bh
        _emit 000h
    done:
        _emit 089h
        _emit 00dh
        _emit 074h
        _emit 02ah
        _emit 02bh
        _emit 000h
        ret
    }
}
