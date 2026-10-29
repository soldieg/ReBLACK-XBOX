/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5A20(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0xC6
        _emit 0x04
        _emit 0x10
        _emit 0x00
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x64
        _emit 0x7C
        _emit 0xF3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
