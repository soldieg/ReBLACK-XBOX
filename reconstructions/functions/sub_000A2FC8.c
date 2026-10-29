/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A2FC8(void)
{
    __asm {
        _emit 0x89
        _emit 0x4B
        _emit 0x08
        _emit 0x89
        _emit 0x43
        _emit 0x04
        _emit 0x89
        _emit 0x6B
        _emit 0x0C
        _emit 0x59
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
