/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEAB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0E
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x8B
        _emit 0x11
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0x6A
        _emit 0x04
        _emit 0xFF
        _emit 0x12
        _emit 0xC3
    }
}
