/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6E30(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x98
        _emit 0x7C
        _emit 0xEC
        _emit 0xFF
        _emit 0x8B
        _emit 0x86
        _emit 0x40
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x8E
        _emit 0x40
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x96
        _emit 0x90
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x8E
        _emit 0x90
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xFF
        _emit 0x62
        _emit 0x04
    }
}
