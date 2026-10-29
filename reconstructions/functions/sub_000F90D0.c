/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F90D0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x08
        _emit 0x8B
        _emit 0xC7
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x33
        _emit 0xDD
        _emit 0xFE
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x07
        _emit 0x57
        _emit 0x56
        _emit 0xE8
        _emit 0x48
        _emit 0xF0
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
