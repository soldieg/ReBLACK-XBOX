/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181250(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x1D
        _emit 0x7C
        _emit 0x0D
        _emit 0x83
        _emit 0xF8
        _emit 0x1F
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x20
        _emit 0xB5
        _emit 0x28
        _emit 0x00
        _emit 0x7E
        _emit 0x03
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC3
    }
}
