/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0009AFD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x80
        _emit 0x78
        _emit 0x01
        _emit 0x01
        _emit 0x7C
        _emit 0x18
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x50
        _emit 0x10
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0xE8
        _emit 0x03
        _emit 0xD7
        _emit 0xFF
        _emit 0xFF
        _emit 0xDD
        _emit 0xD8
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xD9
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
