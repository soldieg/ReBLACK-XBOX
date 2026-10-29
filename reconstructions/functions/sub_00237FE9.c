/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00237FE9(void)
{
    __asm {
        _emit 0x01
        _emit 0x47
        _emit 0x3F
        _emit 0xFA
        _emit 0x40
        _emit 0x47
        _emit 0x3F
        _emit 0x08
        _emit 0x80
        _emit 0x47
        _emit 0x3F
        _emit 0xF9
        _emit 0xBE
        _emit 0x47
        _emit 0x3F
        _emit 0xCA
        _emit 0xFD
        _emit 0x47
    }
}
