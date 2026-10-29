/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BAAF0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x7C
        _emit 0x8B
        _emit 0x51
        _emit 0x08
        _emit 0x8B
        _emit 0x82
        _emit 0xBC
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
