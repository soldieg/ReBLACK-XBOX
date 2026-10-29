/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F45F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4F
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xF6
        _emit 0x89
        _emit 0x77
        _emit 0x08
        _emit 0x74
        _emit 0x06
        _emit 0x8B
        _emit 0x16
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x22
        _emit 0xC3
    }
}
