/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F84C0(void)
{
    __asm {
        _emit 0xE9
        _emit 0x5B
        _emit 0xBA
        _emit 0xEC
        _emit 0xFF
    }
}
