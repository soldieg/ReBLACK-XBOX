/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001881A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x12
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x83
        _emit 0xB8
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x75
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
