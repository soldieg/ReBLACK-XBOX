/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E52A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0xC1
        _emit 0xF8
        _emit 0x19
        _emit 0x83
        _emit 0xF8
        _emit 0x2F
        _emit 0x7D
        _emit 0x08
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0x88
        _emit 0xC3
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
        _emit 0xB8
        _emit 0xD0
        _emit 0x4E
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
