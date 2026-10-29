__declspec(naked) void sub_002807F1(void)
{
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        lea esi, [edi + 3]
        and esi, 0FFFFFFFCh
        __emit 0FFh
        __emit 015h
        __emit 0A0h
        __emit 030h
        __emit 028h
        __emit 000h
        __emit 039h
        __emit 035h
        __emit 038h
        __emit 0D0h
        __emit 027h
        __emit 000h
        mov cl, al
        jc slow_allocate
        mov ebx, 80001000h
        __emit 02Bh
        __emit 01Dh
        __emit 038h
        __emit 0D0h
        __emit 027h
        __emit 000h
        __emit 029h
        __emit 035h
        __emit 038h
        __emit 0D0h
        __emit 027h
        __emit 000h
        __emit 0FFh
        __emit 015h
        __emit 09Ch
        __emit 030h
        __emit 028h
        __emit 000h
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        mov eax, 0CCCCCCCCh
        mov edi, ebx
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        jmp done
    slow_allocate:
        __emit 0FFh
        __emit 015h
        __emit 09Ch
        __emit 030h
        __emit 028h
        __emit 000h
        push dword ptr [esp + 14h]
        push edi
        __emit 0FFh
        __emit 015h
        __emit 054h
        __emit 031h
        __emit 028h
        __emit 000h
        mov ebx, eax
    done:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 8
    }
}
