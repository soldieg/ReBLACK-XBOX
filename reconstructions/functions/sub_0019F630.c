/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019F630(void)
{
    __asm {
        _emit 0xE9
        _emit 0x7B
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
    }
}
