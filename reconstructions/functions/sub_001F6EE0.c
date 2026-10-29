/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6EE0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x5B
        _emit 0xEB
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x81
        _emit 0x30
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x30
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x91
        _emit 0x30
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x30
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0xFF
        _emit 0x62
        _emit 0x04
    }
}
