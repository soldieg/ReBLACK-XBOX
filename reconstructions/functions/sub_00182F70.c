/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182F70(void)
{
    __asm {
        _emit 0xC6
        _emit 0x84
        _emit 0x01
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x62
        _emit 0x40
    }
}
