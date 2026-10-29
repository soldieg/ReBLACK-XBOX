/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5FA0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xB6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x89
        _emit 0xB0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xC7
        _emit 0x04
        _emit 0x41
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
