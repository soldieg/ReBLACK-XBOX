/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019CEE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x89
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x49
        _emit 0x4F
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
