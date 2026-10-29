/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEB90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x18
    }
}
