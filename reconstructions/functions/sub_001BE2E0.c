/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BE2E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x8C
        _emit 0x8F
        _emit 0x58
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x34
        _emit 0xE3
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0x88
        _emit 0x87
        _emit 0xA5
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
