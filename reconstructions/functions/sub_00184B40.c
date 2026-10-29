/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184B40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x48
        _emit 0x8B
        _emit 0x81
        _emit 0xA8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x14
        _emit 0x40
        _emit 0xA1
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x84
        _emit 0x90
        _emit 0xAC
        _emit 0x0F
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
