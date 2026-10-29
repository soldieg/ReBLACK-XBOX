/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B58B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x0A
        _emit 0xC7
        _emit 0x81
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
