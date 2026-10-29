/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6B10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x20
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0xBF
        _emit 0xC0
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x0F
        _emit 0xBF
        _emit 0x04
        _emit 0x42
        _emit 0x03
        _emit 0x81
        _emit 0x4C
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
