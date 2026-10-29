/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A759E(void)
{
    __asm {
        _emit 0x83
        _emit 0x4D
        _emit 0xFC
        _emit 0xFF
        _emit 0xE8
        _emit 0x12
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x7D
        _emit 0x08
        _emit 0x01
        _emit 0x8B
        _emit 0x45
        _emit 0xE4
        _emit 0x74
        _emit 0x03
        _emit 0x8B
        _emit 0x45
        _emit 0xDC
        _emit 0xE8
        _emit 0x27
        _emit 0xB8
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
