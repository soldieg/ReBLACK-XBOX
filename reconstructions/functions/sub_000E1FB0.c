/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1FB0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xC3
    }
}
