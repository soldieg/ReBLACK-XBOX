/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017A5D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x08
        _emit 0xC6
        _emit 0x81
        _emit 0xA9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC3
    }
}
