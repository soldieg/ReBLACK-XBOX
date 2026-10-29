/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C0D0(void)
{
    __asm {
        _emit 0x84
        _emit 0xC9
        _emit 0x8B
        _emit 0x88
        _emit 0xE0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0A
        _emit 0x83
        _emit 0xC9
        _emit 0x08
        _emit 0x89
        _emit 0x88
        _emit 0xE0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x83
        _emit 0xE1
        _emit 0xF7
        _emit 0x89
        _emit 0x88
        _emit 0xE0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
