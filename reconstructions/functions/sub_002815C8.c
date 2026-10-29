/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002815C8(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8D
        _emit 0x81
        _emit 0x70
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x10
        _emit 0x81
        _emit 0xC1
        _emit 0x74
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xD2
        _emit 0x56
        _emit 0x8B
        _emit 0x31
        _emit 0x74
        _emit 0x0E
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0x83
        _emit 0x21
        _emit 0x00
        _emit 0x56
        _emit 0x68
        _emit 0x00
        _emit 0x06
        _emit 0x00
        _emit 0x80
        _emit 0xFF
        _emit 0xD2
        _emit 0x5E
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
