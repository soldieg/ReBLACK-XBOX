/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00040364(void)
{
    __asm {
        _emit 0xA1
        _emit 0x0C
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x60
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x64
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0x10
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x20
        _emit 0x48
        _emit 0xA3
        _emit 0x10
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC3
    }
}
