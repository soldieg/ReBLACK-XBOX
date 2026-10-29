/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F41D0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0x8A
        _emit 0xC3
        _emit 0xE8
        _emit 0xA6
        _emit 0xE1
        _emit 0xEC
        _emit 0xFF
        _emit 0x88
        _emit 0x9F
        _emit 0xEC
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x5F
        _emit 0xC3
    }
}
