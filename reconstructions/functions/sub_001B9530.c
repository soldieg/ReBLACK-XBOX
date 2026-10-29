/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B9530(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x88
        _emit 0x41
        _emit 0x14
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
        _emit 0xC7
        _emit 0x41
        _emit 0x38
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x3C
        _emit 0x89
        _emit 0x41
        _emit 0x34
        _emit 0x89
        _emit 0x41
        _emit 0x30
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
