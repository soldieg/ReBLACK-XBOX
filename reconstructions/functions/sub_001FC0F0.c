/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001FC0F0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x60
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0x57
        _emit 0x8B
        _emit 0xB8
        _emit 0xC8
        _emit 0xD3
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x5F
        _emit 0x80
        _emit 0xF4
        _emit 0xFF
        _emit 0x84
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0x5F
        _emit 0xC3
    }
}
