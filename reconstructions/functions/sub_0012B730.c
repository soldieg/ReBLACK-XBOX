/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012B730(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x88
        _emit 0x81
        _emit 0x10
        _emit 0x2B
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
