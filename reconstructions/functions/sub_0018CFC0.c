/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018CFC0(void)
{
    __asm {
        _emit 0x83
        _emit 0x78
        _emit 0x40
        _emit 0x01
        _emit 0x75
        _emit 0x0A
        _emit 0x8B
        _emit 0x88
        _emit 0xE4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xE9
        _emit 0x58
        _emit 0xAE
        _emit 0xFF
        _emit 0xFF
    }
}
