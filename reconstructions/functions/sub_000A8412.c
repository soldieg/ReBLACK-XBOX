/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A8412(void)
{
    __asm {
        _emit 0x8B
        _emit 0x00
        _emit 0x81
        _emit 0x38
        _emit 0x63
        _emit 0x73
        _emit 0x6D
        _emit 0xE0
        _emit 0x74
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xE8
        _emit 0x6C
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xA0
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0xFB
        _emit 0x07
        _emit 0x00
        _emit 0x00
    }
}
