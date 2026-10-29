/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BC350(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xA4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x04
        _emit 0x90
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x0C
        _emit 0x8B
        _emit 0x91
        _emit 0x9C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC1
        _emit 0xE0
        _emit 0x06
        _emit 0x03
        _emit 0xC2
        _emit 0xC3
        _emit 0x8D
        _emit 0x41
        _emit 0x70
        _emit 0xC3
    }
}
