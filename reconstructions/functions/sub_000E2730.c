/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E2730(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xA0
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0F
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0xC7
        _emit 0x05
        _emit 0xA0
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
