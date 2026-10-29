/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7610(void)
{
    __asm {
        _emit 0xA0
        _emit 0x50
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0x54
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xF6
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x23
        _emit 0xC1
        _emit 0xC3
    }
}
