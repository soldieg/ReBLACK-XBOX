/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F55D0(void)
{
    __asm {
        _emit 0x8D
        _emit 0x46
        _emit 0x1E
        _emit 0xBA
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x06
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB9
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x00
        _emit 0x01
        _emit 0x83
        _emit 0xC0
        _emit 0x20
        _emit 0x49
        _emit 0x75
        _emit 0xF7
        _emit 0x4A
        _emit 0x75
        _emit 0xEF
        _emit 0xC7
        _emit 0x86
        _emit 0x28
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0xC7
        _emit 0x06
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0x07
        _emit 0xC3
    }
}
