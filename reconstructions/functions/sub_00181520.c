/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181520(void)
{
    __asm {
        _emit 0x83
        _emit 0x78
        _emit 0x04
        _emit 0x2A
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xF8
        _emit 0x93
        _emit 0x28
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC0
        _emit 0x8E
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
