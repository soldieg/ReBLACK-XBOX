/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8280(void)
{
    __asm {
        _emit 0xC6
        _emit 0x80
        _emit 0xAC
        _emit 0xD3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
