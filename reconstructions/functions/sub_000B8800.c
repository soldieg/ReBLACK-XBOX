/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8800(void)
{
    __asm {
        _emit 0x50
        _emit 0x68
        _emit 0xB0
        _emit 0xDF
        _emit 0x28
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0xCC
        _emit 0xB2
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x32
        _emit 0x51
        _emit 0xE8
        _emit 0x2F
        _emit 0x93
        _emit 0xFE
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0xC3
    }
}
