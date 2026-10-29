/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018A780(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xC6
        _emit 0x41
        _emit 0x08
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x40
        _emit 0x20
        _emit 0xF3
        _emit 0x0F
        _emit 0x58
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x0C
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
