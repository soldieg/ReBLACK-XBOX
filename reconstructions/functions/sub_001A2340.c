/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A2340(void)
{
    __asm {
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x05
        _emit 0xE0
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0xE8
        _emit 0x60
        _emit 0x36
        _emit 0xE7
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
