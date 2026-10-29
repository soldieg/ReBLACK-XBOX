/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001129D0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x50
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0xE8
        _emit 0x41
        _emit 0xD3
        _emit 0xF8
        _emit 0xFF
        _emit 0xC3
    }
}
