/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00157B00(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x4C
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
