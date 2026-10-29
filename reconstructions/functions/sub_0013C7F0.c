/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C7F0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x47
        _emit 0x44
        _emit 0x89
        _emit 0x47
        _emit 0x48
        _emit 0xC7
        _emit 0x47
        _emit 0x40
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB9
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0xAB
        _emit 0xB0
        _emit 0x01
        _emit 0x5F
        _emit 0xC3
    }
}
