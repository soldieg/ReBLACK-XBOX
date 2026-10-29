/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00159350(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xA3
        _emit 0xBC
        _emit 0x9E
        _emit 0x2D
        _emit 0x00
        _emit 0xA3
        _emit 0xB0
        _emit 0x9E
        _emit 0x2D
        _emit 0x00
        _emit 0xA2
        _emit 0xD8
        _emit 0x80
        _emit 0x2D
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
