/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017FA90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x81
        _emit 0x24
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x16
        _emit 0x83
        _emit 0xB8
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x75
        _emit 0x0D
        _emit 0x57
        _emit 0x8D
        _emit 0xB8
        _emit 0x60
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x3B
        _emit 0x69
        _emit 0x01
        _emit 0x00
        _emit 0x5F
        _emit 0xC3
    }
}
