/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1ED0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x0F
        _emit 0xBE
        _emit 0x80
        _emit 0x48
        _emit 0x86
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
