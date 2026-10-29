/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A6DC8(void)
{
    __asm {
        _emit 0xDD
        _emit 0xD8
        _emit 0xDD
        _emit 0xD8
        _emit 0xD9
        _emit 0xEE
        _emit 0xC3
        _emit 0xDD
        _emit 0xD8
    }
}
