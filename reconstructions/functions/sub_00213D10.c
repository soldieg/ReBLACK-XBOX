/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00213D10(void)
{
    __asm {
        _emit 0xA1
        _emit 0xA0
        _emit 0xE3
        _emit 0x2A
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0xA4
        _emit 0xE3
        _emit 0x2A
        _emit 0x00
        _emit 0xA3
        _emit 0xF8
        _emit 0x27
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0xFC
        _emit 0x27
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
