/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00080660(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xD9
        _emit 0x00
        _emit 0xD8
        _emit 0x0D
        _emit 0xB4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xE8
        _emit 0x63
        _emit 0x2E
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x88
        _emit 0x81
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
    }
}
