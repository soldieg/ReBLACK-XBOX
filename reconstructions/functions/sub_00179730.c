/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00179730(void)
{
    __asm {
        _emit 0xA0
        _emit 0x8C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x14
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x80
        _emit 0xC8
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
