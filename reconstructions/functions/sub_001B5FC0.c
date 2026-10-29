/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5FC0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xF9
        _emit 0xFF
        _emit 0x74
        _emit 0x12
        _emit 0x8B
        _emit 0x92
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x52
        _emit 0x58
        _emit 0x8B
        _emit 0x0C
        _emit 0x8A
        _emit 0x40
        _emit 0x83
        _emit 0xF9
        _emit 0xFF
        _emit 0x75
        _emit 0xF7
        _emit 0xC3
    }
}
