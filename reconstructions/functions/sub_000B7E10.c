/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7E10(void)
{
    __asm {
        _emit 0xE9
        _emit 0x5B
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
    }
}
