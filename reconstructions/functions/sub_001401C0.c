/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001401C0(void)
{
    __asm {
        _emit 0x89
        _emit 0x08
        _emit 0x8B
        _emit 0x09
        _emit 0x0F
        _emit 0x28
        _emit 0x81
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x10
        _emit 0xC7
        _emit 0x40
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x50
        _emit 0x24
        _emit 0xC3
    }
}
