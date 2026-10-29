/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A6F40(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x32
        _emit 0x79
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x07
        _emit 0x83
        _emit 0xE8
        _emit 0x02
        _emit 0x75
        _emit 0x09
        _emit 0x8B
        _emit 0x06
        _emit 0x6A
        _emit 0x03
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x3C
        _emit 0x5F
        _emit 0x32
        _emit 0xC0
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
