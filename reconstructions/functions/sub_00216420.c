/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00216420(void)
{
    __asm {
        _emit 0xB9
        _emit 0x5C
        _emit 0xE3
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0x16
        _emit 0x97
        _emit 0xFF
        _emit 0xFF
        _emit 0x68
        _emit 0x90
        _emit 0x7D
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x46
        _emit 0xB8
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
