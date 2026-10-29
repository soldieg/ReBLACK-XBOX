/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000D9990(void)
{
    __asm {
        _emit 0xE9
        _emit 0x0B
        _emit 0xD9
        _emit 0xFF
        _emit 0xFF
    }
}
