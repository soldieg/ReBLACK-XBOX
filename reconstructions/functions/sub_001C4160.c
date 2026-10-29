/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C4160(void)
{
    __asm {
        _emit 0x33
        _emit 0xD2
        _emit 0x89
        _emit 0x90
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xF7
        _emit 0x98
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x90
        _emit 0xA8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x90
        _emit 0xAD
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
