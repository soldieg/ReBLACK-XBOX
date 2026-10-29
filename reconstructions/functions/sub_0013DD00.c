/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DD00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0xB0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0xE9
        _emit 0x5F
        _emit 0x9F
        _emit 0xF7
        _emit 0xFF
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
