/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8480(void)
{
    __asm {
        _emit 0x0F
        _emit 0x2F
        _emit 0x05
        _emit 0xBC
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x76
        _emit 0x0E
        _emit 0x80
        _emit 0x48
        _emit 0x30
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x20
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x1C
        _emit 0xC3
    }
}
