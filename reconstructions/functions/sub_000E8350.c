/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E8350(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0A
        _emit 0x0F
        _emit 0xB7
        _emit 0x49
        _emit 0x02
        _emit 0x3B
        _emit 0xC8
        _emit 0x0F
        _emit 0x47
        _emit 0xC8
        _emit 0x51
        _emit 0x6A
        _emit 0x01
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x52
        _emit 0xE8
        _emit 0xE9
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
