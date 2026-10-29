/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00188490(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x40
        _emit 0x20
        _emit 0x0F
        _emit 0x2F
        _emit 0x41
        _emit 0x20
        _emit 0x76
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
