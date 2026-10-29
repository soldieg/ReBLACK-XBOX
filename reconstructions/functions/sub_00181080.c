/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181080(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x44
        _emit 0xC6
        _emit 0x40
        _emit 0x60
        _emit 0x01
        _emit 0xC3
    }
}
