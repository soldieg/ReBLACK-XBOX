/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6140(void)
{
    __asm {
        _emit 0xC7
        _emit 0x41
        _emit 0x54
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x41
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0x24
        _emit 0x46
        _emit 0x2D
        _emit 0x00
        _emit 0xF8
        _emit 0xD6
        _emit 0xB9
        _emit 0x02
        _emit 0xC7
        _emit 0x05
        _emit 0x20
        _emit 0x46
        _emit 0x2D
        _emit 0x00
        _emit 0x07
        _emit 0x29
        _emit 0x46
        _emit 0xFD
        _emit 0xC3
    }
}
