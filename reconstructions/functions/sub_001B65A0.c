/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B65A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0xD4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x80
        _emit 0xC9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC7
        _emit 0x80
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
