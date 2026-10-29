/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BA0E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x46
        _emit 0x70
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x14
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xFF
        _emit 0x8E
        _emit 0xFC
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC7
        _emit 0x46
        _emit 0x70
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
