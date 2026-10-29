/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D5C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x88
        _emit 0x46
        _emit 0x18
        _emit 0xC3
    }
}
