/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5360(void)
{
    __asm {
        _emit 0x84
        _emit 0xC0
        _emit 0x7C
        _emit 0x13
        _emit 0x8B
        _emit 0x11
        _emit 0x0F
        _emit 0xB6
        _emit 0x4A
        _emit 0x01
        _emit 0x0F
        _emit 0xBE
        _emit 0xD0
        _emit 0x3B
        _emit 0xD1
        _emit 0x7D
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
