/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7540(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0xC6
        _emit 0x40
        _emit 0x1C
        _emit 0x01
        _emit 0xC3
    }
}
