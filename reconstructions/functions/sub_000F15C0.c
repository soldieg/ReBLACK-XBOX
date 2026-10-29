/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F15C0(void)
{
    __asm {
        _emit 0x51
        _emit 0x68
        _emit 0x84
        _emit 0xE5
        _emit 0x28
        _emit 0x00
        _emit 0x8D
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x66
        _emit 0xC7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x2A
        _emit 0x00
        _emit 0x52
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x24
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
