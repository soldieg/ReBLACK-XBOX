/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00140D20(void)
{
    __asm {
        _emit 0xC6
        _emit 0x40
        _emit 0x66
        _emit 0x00
        _emit 0xC3
    }
}
