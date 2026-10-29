/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00188A40(void)
{
    __asm {
        _emit 0x80
        _emit 0x38
        _emit 0x00
        _emit 0x74
        _emit 0x03
        _emit 0xC6
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
