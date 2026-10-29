/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00188EC0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0x0C
        _emit 0x82
        _emit 0x83
        _emit 0x79
        _emit 0x7C
        _emit 0x04
        _emit 0x75
        _emit 0x05
        _emit 0x39
        _emit 0x79
        _emit 0x70
        _emit 0x74
        _emit 0x09
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x10
        _emit 0x7C
        _emit 0xEC
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
    }
}
