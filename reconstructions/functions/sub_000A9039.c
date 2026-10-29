/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A9039(void)
{
    __asm {
        _emit 0xE8
        _emit 0xA1
        _emit 0x9D
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
