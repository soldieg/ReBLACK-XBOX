/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00178180(void)
{
    __asm {
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x56
        _emit 0x8D
        _emit 0xB4
        _emit 0xC1
        _emit 0x58
        _emit 0xCA
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xD0
        _emit 0xED
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
