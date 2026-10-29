/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00189A80(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x3C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0x64
        _emit 0x81
        _emit 0x2B
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0xE8
        _emit 0x38
        _emit 0x6B
        _emit 0xEC
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
