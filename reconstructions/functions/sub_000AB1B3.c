/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AB1B3(void)
{
    __asm {
        _emit 0x56
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0xB1
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x06
        _emit 0x04
        _emit 0x57
        _emit 0x29
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
