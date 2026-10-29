/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B49E0(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x41
        _emit 0x1C
        _emit 0xF3
        _emit 0x0F
        _emit 0x5C
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0x57
        _emit 0xC9
        _emit 0x0F
        _emit 0x2F
        _emit 0xC8
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x1C
        _emit 0x72
        _emit 0x11
        _emit 0x8B
        _emit 0x01
        _emit 0xC6
        _emit 0x41
        _emit 0x18
        _emit 0x00
        _emit 0xC7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x60
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
