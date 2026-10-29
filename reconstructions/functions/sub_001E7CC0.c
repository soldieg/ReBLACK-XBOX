/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001E7CC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8D
        _emit 0x84
        _emit 0xC2
        _emit 0xFC
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xE8
        _emit 0x65
        _emit 0xCA
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
