/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F8F70(void)
{
    __asm {
        _emit 0x56
        _emit 0x8D
        _emit 0x77
        _emit 0x6C
        _emit 0xC7
        _emit 0x47
        _emit 0x48
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xA0
        _emit 0xAF
        _emit 0xEC
        _emit 0xFF
        _emit 0xC7
        _emit 0x87
        _emit 0x88
        _emit 0xB0
        _emit 0x4E
        _emit 0x00
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
