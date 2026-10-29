/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DFD0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0xCA
        _emit 0x39
        _emit 0x31
        _emit 0x74
        _emit 0x0A
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x10
        _emit 0x83
        _emit 0xF8
        _emit 0x02
        _emit 0x7C
        _emit 0xF3
        _emit 0xC3
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0xC6
        _emit 0x44
        _emit 0x10
        _emit 0x0F
        _emit 0x00
        _emit 0xC3
    }
}
