/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3480(void)
{
    __asm {
        _emit 0xA3
        _emit 0x94
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xA3
        _emit 0x98
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xA3
        _emit 0x9C
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0xA4
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
