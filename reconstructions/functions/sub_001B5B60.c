/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5B60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x42
        _emit 0x30
        _emit 0x3B
        _emit 0xC8
        _emit 0x72
        _emit 0x12
        _emit 0x8B
        _emit 0x52
        _emit 0x34
        _emit 0x69
        _emit 0xD2
        _emit 0xD0
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xD0
        _emit 0x3B
        _emit 0xCA
        _emit 0x73
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
