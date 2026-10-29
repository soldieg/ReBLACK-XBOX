/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B7400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x34
        _emit 0x8B
        _emit 0x11
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xFE
        _emit 0x01
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0x50
        _emit 0xFF
        _emit 0x52
        _emit 0x18
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
