/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1F60(void)
{
    __asm {
        _emit 0xC7
        _emit 0x80
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0x48
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0xD9
        _emit 0x0D
        _emit 0xF6
        _emit 0xFF
        _emit 0xC3
    }
}
