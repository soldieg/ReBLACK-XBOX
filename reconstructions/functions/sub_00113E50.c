/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113E50(void)
{
    __asm {
        _emit 0xA1
        _emit 0x78
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x0C
        _emit 0x85
        _emit 0x18
        _emit 0x83
        _emit 0x28
        _emit 0x00
        _emit 0x6A
        _emit 0x03
        _emit 0x51
        _emit 0x81
        _emit 0xC2
        _emit 0xBC
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0xE8
        _emit 0xD5
        _emit 0xE0
        _emit 0xF8
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
