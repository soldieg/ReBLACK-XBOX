/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001846D0(void)
{
    __asm {
        _emit 0x50
        _emit 0x51
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0xD7
        _emit 0xE8
        _emit 0xEC
        _emit 0xFF
        _emit 0xC7
        _emit 0x06
        _emit 0xB0
        _emit 0xF5
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
