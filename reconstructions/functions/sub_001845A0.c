/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001845A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x7C
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x74
        _emit 0x0F
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x74
        _emit 0x0A
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0x74
        _emit 0x05
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
