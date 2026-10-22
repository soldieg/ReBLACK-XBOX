__declspec(naked) void __cdecl sub_00013FF0(void)
{
    __asm {
        movss xmm0, dword ptr [eax + 4e4h]
        ; The inline assembler adds a redundant DS prefix to an absolute operand.
        __emit 0x0f
        __emit 0x2f
        __emit 0x05
        __emit 0x74
        __emit 0x5c
        __emit 0x29
        __emit 0x00
        jc short below_or_unordered
        mov eax, 1
        ret
    below_or_unordered:
        xor eax, eax
        ret
    }
}
