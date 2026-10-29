/* Keep absolute operands unrelocated to match the candidate COFF. */
__declspec(naked) void sub_00013BE0(void)
{
    __asm {
        push ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4h]
        push esi
        mov esi, ecx
        sar esi, 10h
        shl ecx, 10h
        add esi, edx
        add ecx, esi
        mov dword ptr [eax], ecx
        add ecx, edx
        mov dword ptr [eax + 4h], ecx
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 4h], eax
        fild dword ptr [esp + 4h]
        jge L_13C0E
        _emit 0xD8
        _emit 0x05
        _emit 0x90
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        L_13C0E:
        _emit 0xD8
        _emit 0x0D
        _emit 0x44
        _emit 0x82
        _emit 0x28
        _emit 0x00
        pop esi
        pop ecx
        ret
    }
}
