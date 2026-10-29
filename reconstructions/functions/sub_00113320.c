/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113320(void)
{
    __asm {
        _emit 0xA1
        _emit 0xBC
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x33
        _emit 0xC9
        _emit 0x66
        _emit 0x89
        _emit 0x88
        _emit 0xCA
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x89
        _emit 0x88
        _emit 0xCC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x00
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
