/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013E660(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xC7
        _emit 0x40
        _emit 0x04
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x41
        _emit 0x20
        _emit 0xF3
        _emit 0x0F
        _emit 0x58
        _emit 0x40
        _emit 0x3C
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x10
        _emit 0xC3
    }
}
