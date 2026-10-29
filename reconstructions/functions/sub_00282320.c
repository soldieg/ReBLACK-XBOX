/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00282320(void)
{
    __asm {
        _emit 0x68
        _emit 0x58
        _emit 0x29
        _emit 0x2B
        _emit 0x00
        _emit 0xFF
        _emit 0x15
        _emit 0x00
        _emit 0x31
        _emit 0x28
        _emit 0x00
        _emit 0xFF
        _emit 0x35
        _emit 0x50
        _emit 0x29
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xFF
        _emit 0x70
        _emit 0x04
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0xE8
        _emit 0x71
        _emit 0xDC
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
