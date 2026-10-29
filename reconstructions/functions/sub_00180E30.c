/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00180E30(void)
{
    __asm {
        _emit 0x32
        _emit 0xC0
        _emit 0x88
        _emit 0x41
        _emit 0x45
        _emit 0x88
        _emit 0x41
        _emit 0x46
        _emit 0xC3
    }
}
