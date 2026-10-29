/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B000B(void)
{
    __asm {
        _emit 0x81
        _emit 0x08
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
