/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00156900(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0xA3
        _emit 0xB4
        _emit 0x9E
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0xB8
        _emit 0x9E
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xDC
        _emit 0x80
        _emit 0x2D
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
