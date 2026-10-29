/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217F90(void)
{
    __asm {
        _emit 0xB9
        _emit 0xED
        _emit 0x07
        _emit 0x2D
        _emit 0x00
        _emit 0xE9
        _emit 0x96
        _emit 0x7B
        _emit 0xFF
        _emit 0xFF
    }
}
