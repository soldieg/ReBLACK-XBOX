/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8880(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x88
        _emit 0x30
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x2C
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x36
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
