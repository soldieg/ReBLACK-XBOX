/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001866F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0xFF
        _emit 0x75
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x8A
        _emit 0x44
        _emit 0x08
        _emit 0x05
        _emit 0xC3
    }
}
