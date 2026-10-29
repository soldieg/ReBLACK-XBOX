/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E91B0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x30
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x0F
        _emit 0x57
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0x51
        _emit 0xE0
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x76
        _emit 0x50
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0xF1
        _emit 0x5E
        _emit 0xC3
    }
}
