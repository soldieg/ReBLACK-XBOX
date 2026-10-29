__declspec(naked) void __cdecl sub_00282448(void)
{
    __asm {
        __emit 083h
        __emit 03Dh
        __emit 0A0h
        __emit 029h
        __emit 02Bh
        __emit 000h
        __emit 000h
        push esi
        mov esi, 2B2958h
        jz clear_timer
        push esi
        __emit 0FFh
        __emit 015h
        __emit 000h
        __emit 031h
        __emit 028h
        __emit 000h
        push 0
        __emit 0FFh
        __emit 035h
        __emit 0A0h
        __emit 029h
        __emit 02Bh
        __emit 000h
        __emit 0E8h
        __emit 036h
        __emit 0FFh
        __emit 0FFh
        __emit 0FFh
        __emit 083h
        __emit 025h
        __emit 0A0h
        __emit 029h
        __emit 02Bh
        __emit 000h
        __emit 000h
    clear_timer:
        mov edx, dword ptr [esp + 8]
        test edx, edx
        jnz alternate
        mov eax, 0FA0A1F00h
        jmp selected
    alternate:
        cmp edx, 3
        mov eax, 0FFF48E50h
        jz selected
        mov eax, 0FFB3B4C0h
    selected:
        push 2B2980h
        or ecx, 0FFFFFFFFh
        push ecx
        push eax
        push esi
        __emit 089h
        __emit 015h
        __emit 09Ch
        __emit 029h
        __emit 02Bh
        __emit 000h
        __emit 0FFh
        __emit 015h
        __emit 0FCh
        __emit 030h
        __emit 028h
        __emit 000h
        pop esi
        ret 4
    }
}
