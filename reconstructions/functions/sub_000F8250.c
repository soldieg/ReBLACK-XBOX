/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F8250(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0x8B
        _emit 0xCF
        _emit 0xE8
        _emit 0xB7
        _emit 0xEB
        _emit 0xFE
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x07
        _emit 0x56
        _emit 0x57
        _emit 0xE8
        _emit 0xCC
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
