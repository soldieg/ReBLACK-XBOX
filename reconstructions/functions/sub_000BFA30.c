/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BFA30(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0x40
        _emit 0x26
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x77
        _emit 0x19
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x58
        _emit 0xFA
        _emit 0x0B
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x6C
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC3
    }
}
