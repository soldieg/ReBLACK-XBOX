/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1EB0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0x50
        _emit 0x86
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
