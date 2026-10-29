/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E34A0(void)
{
    __asm {
        _emit 0xA3
        _emit 0xDC
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0xC8
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
