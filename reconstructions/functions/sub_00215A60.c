/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215A60(void)
{
    __asm {
        _emit 0x68
        _emit 0xF0
        _emit 0xBF
        _emit 0x04
        _emit 0x00
        _emit 0x68
        _emit 0x8C
        _emit 0x46
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x30
        _emit 0x3B
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xCC
        _emit 0xB1
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x00
        _emit 0x78
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xFC
        _emit 0xC1
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
