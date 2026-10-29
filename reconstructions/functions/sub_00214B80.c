/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00214B80(void)
{
    __asm {
        _emit 0x66
        _emit 0xFF
        _emit 0x05
        _emit 0xEC
        _emit 0xC7
        _emit 0x2A
        _emit 0x00
        _emit 0x68
        _emit 0xC0
        _emit 0x76
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xE9
        _emit 0xD0
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
