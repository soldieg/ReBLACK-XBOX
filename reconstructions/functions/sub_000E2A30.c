/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E2A30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x09
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x49
        _emit 0x50
        _emit 0x40
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF8
        _emit 0xC3
    }
}
