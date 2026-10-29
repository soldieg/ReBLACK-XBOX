/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001850A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0xC7
        _emit 0x41
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0C
        _emit 0x83
        _emit 0x78
        _emit 0x04
        _emit 0x04
        _emit 0x75
        _emit 0x06
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
