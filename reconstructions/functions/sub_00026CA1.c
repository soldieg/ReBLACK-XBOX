/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00026CA1(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0x83
        _emit 0x4D
        _emit 0xFC
        _emit 0xFF
        _emit 0x33
        _emit 0xC0
        _emit 0xE8
        _emit 0x2C
        _emit 0xC1
        _emit 0x07
        _emit 0x00
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
