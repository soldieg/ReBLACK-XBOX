/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEC60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x8B
        _emit 0xD6
        _emit 0x0F
        _emit 0xAF
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0x33
        _emit 0xD2
        _emit 0xF7
        _emit 0xF6
        _emit 0xC3
    }
}
