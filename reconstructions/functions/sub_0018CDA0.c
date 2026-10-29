/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018CDA0(void)
{
    __asm {
        _emit 0x51
        _emit 0x57
        _emit 0x8B
        _emit 0x38
        _emit 0x81
        _emit 0xC7
        _emit 0xD0
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xC7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xE5
        _emit 0xA5
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x59
        _emit 0xC3
    }
}
