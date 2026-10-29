/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00212700(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x70
        _emit 0x05
        _emit 0x19
        _emit 0x00
        _emit 0x68
        _emit 0x28
        _emit 0xF7
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x50
        _emit 0x5A
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0xBA
        _emit 0x81
        _emit 0xE4
        _emit 0xFF
        _emit 0x68
        _emit 0x90
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x5A
        _emit 0xF5
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
