/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0008BA00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x40
        _emit 0x20
        _emit 0x8B
        _emit 0x88
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC1
        _emit 0x60
        _emit 0x51
        _emit 0xE8
        _emit 0xCA
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xE9
        _emit 0xB6
        _emit 0x7A
        _emit 0x01
        _emit 0x00
    }
}
