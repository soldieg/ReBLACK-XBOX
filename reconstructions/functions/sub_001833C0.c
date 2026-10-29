/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001833C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xFA
        _emit 0x03
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0xC3
    }
}
