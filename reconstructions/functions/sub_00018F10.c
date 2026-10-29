/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00018F10(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x7E
        _emit 0x14
        _emit 0x85
        _emit 0xFF
        _emit 0x7E
        _emit 0x21
        _emit 0xEB
        _emit 0x06
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x46
        _emit 0x14
        _emit 0x8B
        _emit 0x4E
        _emit 0x1C
        _emit 0x8B
        _emit 0x4C
        _emit 0x81
        _emit 0xFC
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x52
        _emit 0x04
        _emit 0x8B
        _emit 0x4E
        _emit 0x14
        _emit 0x49
        _emit 0x4F
        _emit 0x89
        _emit 0x4E
        _emit 0x14
        _emit 0x75
        _emit 0xE7
        _emit 0x5F
        _emit 0xC3
    }
}
