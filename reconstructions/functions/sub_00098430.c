/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00098430(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x81
        _emit 0xC0
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0xE0
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
