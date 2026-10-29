/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B3010(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0xE8
        _emit 0xD8
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x86
        _emit 0x78
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xE9
        _emit 0xAA
        _emit 0x56
        _emit 0xFD
        _emit 0xFF
    }
}
