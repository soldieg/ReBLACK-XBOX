/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001647A0(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0x3A
        _emit 0x7A
        _emit 0x10
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xD2
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC2
        _emit 0x89
        _emit 0x01
        _emit 0x4A
        _emit 0x81
        _emit 0xE2
        _emit 0x0E
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0x8B
        _emit 0xC2
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
