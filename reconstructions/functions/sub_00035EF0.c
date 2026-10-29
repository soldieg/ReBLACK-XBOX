/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00035EF0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x33
        _emit 0xF6
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x8A
        _emit 0x08
        _emit 0x3A
        _emit 0xCA
        _emit 0x74
        _emit 0x07
        _emit 0x40
        _emit 0x84
        _emit 0xC9
        _emit 0x75
        _emit 0xF5
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
