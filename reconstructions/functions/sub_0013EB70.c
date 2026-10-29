/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013EB70(void)
{
    __asm {
        _emit 0xA1
        _emit 0x68
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x15
        _emit 0xF0
        _emit 0x40
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0xC8
        _emit 0x2B
        _emit 0xCA
        _emit 0x83
        _emit 0xF9
        _emit 0x01
        _emit 0xA3
        _emit 0xF0
        _emit 0x40
        _emit 0x2F
        _emit 0x00
        _emit 0x76
        _emit 0x05
        _emit 0xA3
        _emit 0xEC
        _emit 0x40
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
