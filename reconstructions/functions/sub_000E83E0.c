/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E83E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0xE9
        _emit 0x28
        _emit 0xEA
        _emit 0xFF
        _emit 0xFF
    }
}
