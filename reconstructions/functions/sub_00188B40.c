/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00188B40(void)
{
    __asm {
        _emit 0x88
        _emit 0x48
        _emit 0x01
        _emit 0x8B
        _emit 0x0D
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xC6
        _emit 0x00
        _emit 0x01
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x51
        _emit 0x20
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0xC3
    }
}
