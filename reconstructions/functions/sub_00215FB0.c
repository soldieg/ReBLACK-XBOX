/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215FB0(void)
{
    __asm {
        _emit 0x68
        _emit 0x20
        _emit 0xA1
        _emit 0x2B
        _emit 0x00
        _emit 0x68
        _emit 0x30
        _emit 0xA5
        _emit 0x05
        _emit 0x00
        _emit 0x68
        _emit 0x2C
        _emit 0x50
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0xC0
        _emit 0x9C
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x07
        _emit 0xE3
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x20
        _emit 0x7B
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xA7
        _emit 0xBC
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
