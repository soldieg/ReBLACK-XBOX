__declspec(naked) void __cdecl sub_00022B84(void)
{
    __asm {
        ; The assembler's absolute-memory form adds a segment prefix to this indirect jump.
        __emit 0xFF
        __emit 0x25
        __emit 0x24
        __emit 0x30
        __emit 0x28
        __emit 0x00
    }
}
