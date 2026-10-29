/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1B10(void)
{
    __asm {
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xD3
        _emit 0xE0
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0x81
        _emit 0x04
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
