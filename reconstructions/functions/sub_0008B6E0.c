/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0008B6E0(void)
{
    __asm {
        _emit 0x68
        _emit 0xF0
        _emit 0x2A
        _emit 0x2C
        _emit 0x00
        _emit 0xE8
        _emit 0x66
        _emit 0x60
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
    }
}
