// The candidate has fixed relative calls and no COFF relocations; link movement is unverified.

__declspec(naked) unsigned int __cdecl sub_00017E30(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov eax, ebx
        shr eax, 10h
        movzx eax, al
        push eax
        _emit 0e8h
        _emit 03dh
        _emit 000h
        _emit 000h
        _emit 000h
        movzx ecx, bh
        push ecx
        mov byte ptr [esp + 10h], al
        _emit 0e8h
        _emit 030h
        _emit 000h
        _emit 000h
        _emit 000h
        mov edx, ebx
        and edx, 0ffh
        push edx
        mov byte ptr [esp + 15h], al
        _emit 0e8h
        _emit 01eh
        _emit 000h
        _emit 000h
        _emit 000h
        shr ebx, 18h
        push ebx
        mov byte ptr [esp + 1ah], al
        _emit 0e8h
        _emit 011h
        _emit 000h
        _emit 000h
        _emit 000h
        add esp, 10h
        mov byte ptr [esp + 0bh], al
        mov eax, dword ptr [esp + 8]
        pop ebx
        ret
    }
}
