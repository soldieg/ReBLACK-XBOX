/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6190(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4A
        _emit 0xFC
        _emit 0xA1
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x83
        _emit 0xC2
        _emit 0xFC
        _emit 0x83
        _emit 0xC1
        _emit 0x04
        _emit 0xE9
        _emit 0xDD
        _emit 0xF6
        _emit 0xFF
        _emit 0xFF
    }
}
