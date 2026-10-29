/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001EB1D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x6A
        _emit 0x00
        _emit 0x52
        _emit 0xE8
        _emit 0xD0
        _emit 0xDE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
