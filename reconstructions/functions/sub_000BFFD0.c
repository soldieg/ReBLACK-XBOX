/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BFFD0(void)
{
    __asm {
        _emit 0x3B
        _emit 0x41
        _emit 0x08
        _emit 0x72
        _emit 0x0B
        _emit 0x3B
        _emit 0x41
        _emit 0x0C
        _emit 0x73
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
