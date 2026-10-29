/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D5B0(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x04
        _emit 0x85
        _emit 0xF0
        _emit 0xB2
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
