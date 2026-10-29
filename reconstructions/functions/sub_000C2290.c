/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2290(void)
{
    __asm {
        _emit 0x8B
        _emit 0x94
        _emit 0x81
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x06
        _emit 0x8B
        _emit 0xCA
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x20
        _emit 0xC3
    }
}
