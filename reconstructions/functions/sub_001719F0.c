/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001719F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x38
        _emit 0x51
        _emit 0x83
        _emit 0xC0
        _emit 0x0C
        _emit 0x50
        _emit 0xE8
        _emit 0x23
        _emit 0x8A
        _emit 0x0F
        _emit 0x00
        _emit 0xC3
    }
}
