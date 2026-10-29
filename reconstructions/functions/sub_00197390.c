/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00197390(void)
{
    __asm {
        _emit 0x8B
        _emit 0x89
        _emit 0x04
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0xBA
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xD3
        _emit 0xE2
        _emit 0x50
        _emit 0x66
        _emit 0x09
        _emit 0x50
        _emit 0x20
        _emit 0xE8
        _emit 0x69
        _emit 0x88
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
