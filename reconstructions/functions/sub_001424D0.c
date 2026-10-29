/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001424D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x50
        _emit 0x0C
        _emit 0x33
        _emit 0xC9
        _emit 0x88
        _emit 0x4A
        _emit 0x26
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0xC7
        _emit 0x40
        _emit 0x10
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x40
        _emit 0x14
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
