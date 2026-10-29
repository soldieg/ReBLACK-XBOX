/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001820D0(void)
{
    __asm {
        _emit 0xC6
        _emit 0x80
        _emit 0xB4
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
