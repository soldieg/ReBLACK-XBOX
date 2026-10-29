/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00125700(void)
{
    __asm {
        _emit 0xA1
        _emit 0x10
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x50
        _emit 0x8B
        _emit 0x41
        _emit 0x18
        _emit 0x8B
        _emit 0x49
        _emit 0x20
        _emit 0xE8
        _emit 0xAF
        _emit 0xDD
        _emit 0xF9
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
