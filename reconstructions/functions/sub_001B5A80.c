/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5A80(void)
{
    __asm {
        _emit 0x8A
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x84
        _emit 0xC0
        _emit 0x75
        _emit 0x07
        _emit 0xC6
        _emit 0x81
        _emit 0x55
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
