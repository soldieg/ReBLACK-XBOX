/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002251BF(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0x60
        _emit 0x0C
        _emit 0x00
        _emit 0x83
        _emit 0x60
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xC7
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x49
        _emit 0x14
        _emit 0xC1
        _emit 0xE1
        _emit 0x0C
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
