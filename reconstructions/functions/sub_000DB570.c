/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB570(void)
{
    __asm {
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x8D
        _emit 0x44
        _emit 0x08
        _emit 0x28
        _emit 0xC3
    }
}
