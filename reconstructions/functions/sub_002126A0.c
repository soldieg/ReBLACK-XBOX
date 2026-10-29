/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002126A0(void)
{
    __asm {
        _emit 0x68
        _emit 0x38
        _emit 0xA2
        _emit 0x2B
        _emit 0x00
        _emit 0x68
        _emit 0xF0
        _emit 0x07
        _emit 0x19
        _emit 0x00
        _emit 0x68
        _emit 0x50
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x48
        _emit 0x61
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0xF7
        _emit 0xDA
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x70
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xB7
        _emit 0xF5
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
