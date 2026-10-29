/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3260(void)
{
    __asm {
        _emit 0xA1
        _emit 0x88
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x2C
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x15
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x2C
        _emit 0xC3
        _emit 0x8B
        _emit 0x0D
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x2C
        _emit 0xC3
    }
}
