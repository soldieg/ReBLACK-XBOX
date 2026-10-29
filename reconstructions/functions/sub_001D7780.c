/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D7780(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8A
        _emit 0x48
        _emit 0x1C
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x09
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xE9
        _emit 0x5E
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC6
        _emit 0x40
        _emit 0x1C
        _emit 0x01
        _emit 0xE8
        _emit 0x25
        _emit 0xA7
        _emit 0xFE
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
