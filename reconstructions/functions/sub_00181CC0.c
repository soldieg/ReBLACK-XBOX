/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181CC0(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
