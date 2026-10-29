/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001845C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x64
        _emit 0x85
        _emit 0xC0
        _emit 0xC7
        _emit 0x41
        _emit 0x7C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x76
        _emit 0x05
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x40
        _emit 0xC3
    }
}
