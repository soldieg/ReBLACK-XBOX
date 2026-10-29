/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B9390(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xD2
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x88
        _emit 0x51
        _emit 0x2C
        _emit 0x89
        _emit 0x51
        _emit 0x0C
        _emit 0x8B
        _emit 0x40
        _emit 0x18
        _emit 0x8B
        _emit 0x49
        _emit 0x44
        _emit 0x50
        _emit 0x51
        _emit 0xE8
        _emit 0xD4
        _emit 0x71
        _emit 0xFC
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
