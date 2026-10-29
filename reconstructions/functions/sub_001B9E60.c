/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B9E60(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x88
        _emit 0x41
        _emit 0x15
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0C
        _emit 0x88
        _emit 0x41
        _emit 0x16
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
