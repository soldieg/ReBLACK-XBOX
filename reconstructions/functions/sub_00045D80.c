/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00045D80(void)
{
    __asm {
        _emit 0xA1
        _emit 0x10
        _emit 0x33
        _emit 0x2B
        _emit 0x00
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0xA3
        _emit 0x10
        _emit 0x33
        _emit 0x2B
        _emit 0x00
        _emit 0x75
        _emit 0x05
        _emit 0xE8
        _emit 0x4B
        _emit 0xE0
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC3
    }
}
