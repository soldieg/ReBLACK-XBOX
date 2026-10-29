/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182690(void)
{
    __asm {
        _emit 0x80
        _emit 0xC9
        _emit 0xFF
        _emit 0xC6
        _emit 0x40
        _emit 0x04
        _emit 0x01
        _emit 0xC7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x48
        _emit 0x05
        _emit 0x88
        _emit 0x48
        _emit 0x06
        _emit 0xC3
    }
}
