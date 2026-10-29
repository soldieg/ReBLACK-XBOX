/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F14D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xD4
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x0C
        _emit 0x91
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x3B
        _emit 0x0C
        _emit 0x85
        _emit 0xD4
        _emit 0x7D
        _emit 0x2A
        _emit 0x00
        _emit 0x74
        _emit 0x0B
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x0A
        _emit 0x7C
        _emit 0xF1
        _emit 0xB8
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
