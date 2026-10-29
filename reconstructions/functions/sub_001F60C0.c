/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F60C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x10
        _emit 0x8B
        _emit 0x88
        _emit 0x7C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x84
        _emit 0x88
        _emit 0x58
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x80
        _emit 0x7C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
