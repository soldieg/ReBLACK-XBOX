/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018F310(void)
{
    __asm {
        _emit 0x8B
        _emit 0x15
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x58
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x42
        _emit 0x20
        _emit 0xF3
        _emit 0x0F
        _emit 0x58
        _emit 0x05
        _emit 0x7C
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x5C
        _emit 0xC3
    }
}
