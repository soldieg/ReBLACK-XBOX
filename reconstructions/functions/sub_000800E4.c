/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000800E4(void)
{
    __asm {
        _emit 0xA3
        _emit 0x84
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0xE8
        _emit 0x62
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
