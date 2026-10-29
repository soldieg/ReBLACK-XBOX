/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5260(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8D
        _emit 0x4F
        _emit 0x04
        _emit 0xE8
        _emit 0xC1
        _emit 0xE6
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x38
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0x5E
        _emit 0xC3
    }
}
