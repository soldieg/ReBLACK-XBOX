/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019CCC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x38
        _emit 0x05
        _emit 0x74
        _emit 0x05
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x53
        _emit 0x8B
        _emit 0xD9
        _emit 0xE8
        _emit 0x6A
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
