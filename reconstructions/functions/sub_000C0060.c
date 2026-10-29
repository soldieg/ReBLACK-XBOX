/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0060(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x2B
        _emit 0x41
        _emit 0x10
        _emit 0xC3
    }
}
