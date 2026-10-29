/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F25F0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC7
        _emit 0x40
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x41
        _emit 0x20
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
