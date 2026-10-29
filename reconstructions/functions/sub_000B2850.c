/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B2850(void)
{
    __asm {
        _emit 0x56
        _emit 0x0F
        _emit 0xB6
        _emit 0x73
        _emit 0x65
        _emit 0x57
        _emit 0x33
        _emit 0xFF
        _emit 0x33
        _emit 0xC9
        _emit 0x85
        _emit 0xF6
        _emit 0x7E
        _emit 0x10
        _emit 0x8B
        _emit 0xFF
        _emit 0x8B
        _emit 0xC3
        _emit 0xE8
        _emit 0x69
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x03
        _emit 0xF8
        _emit 0x41
        _emit 0x3B
        _emit 0xCE
        _emit 0x7C
        _emit 0xF2
        _emit 0x8B
        _emit 0xC7
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
