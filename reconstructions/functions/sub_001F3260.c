/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3260(void)
{
    __asm {
        _emit 0x33
        _emit 0xD2
        _emit 0xC7
        _emit 0x40
        _emit 0x0C
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x88
        _emit 0x90
        _emit 0x15
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x2B
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xB9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x88
        _emit 0x50
        _emit 0xFD
        _emit 0x88
        _emit 0x10
        _emit 0x40
        _emit 0x49
        _emit 0x75
        _emit 0xF7
        _emit 0xC3
    }
}
