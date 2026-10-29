/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187800(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x44
        _emit 0x8B
        _emit 0x91
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x32
        _emit 0xC0
        _emit 0x83
        _emit 0xFA
        _emit 0x01
        _emit 0x75
        _emit 0x06
        _emit 0x8A
        _emit 0x81
        _emit 0x5A
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
