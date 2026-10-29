/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001E2610(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x00
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x0F
        _emit 0x29
        _emit 0x46
        _emit 0x40
        _emit 0xE8
        _emit 0xE1
        _emit 0x8F
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
