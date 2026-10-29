/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F25C0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x2F
        _emit 0x05
        _emit 0xBC
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x73
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x24
        _emit 0xC3
    }
}
