/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018A490(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0xA4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x91
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8A
        _emit 0x82
        _emit 0xA2
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
