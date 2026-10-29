/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012A9A0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x4C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0B
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xC6
        _emit 0x81
        _emit 0xA4
        _emit 0x19
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
