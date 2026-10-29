/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113720(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0xE8
        _emit 0x04
        _emit 0xE8
        _emit 0xF8
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xA3
        _emit 0x80
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x89
        _emit 0x81
        _emit 0x4C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
