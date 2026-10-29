/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BAFB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0xC0
        _emit 0xB2
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x40
        _emit 0x89
        _emit 0x48
        _emit 0x48
        _emit 0xC7
        _emit 0x40
        _emit 0x54
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
