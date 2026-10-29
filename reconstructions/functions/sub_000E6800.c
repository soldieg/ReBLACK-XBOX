/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6800(void)
{
    __asm {
        _emit 0x56
        _emit 0x8D
        _emit 0x71
        _emit 0x08
        _emit 0xE8
        _emit 0x47
        _emit 0xDA
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
