/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F44E0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0xC7
        _emit 0x41
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x30
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x1C
        _emit 0xC3
    }
}
