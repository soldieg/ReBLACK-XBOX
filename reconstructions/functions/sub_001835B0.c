/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001835B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x68
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x88
        _emit 0x60
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0xC8
        _emit 0xC3
    }
}
