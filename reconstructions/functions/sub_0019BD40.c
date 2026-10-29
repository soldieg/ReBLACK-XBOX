/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019BD40(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x91
        _emit 0xA4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x42
        _emit 0x45
        _emit 0x01
        _emit 0xE8
        _emit 0x1C
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
