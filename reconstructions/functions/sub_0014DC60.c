/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0014DC60(void)
{
    __asm {
        _emit 0x05
        _emit 0x58
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x26
        _emit 0xCB
        _emit 0xFF
        _emit 0xFF
        _emit 0x84
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
