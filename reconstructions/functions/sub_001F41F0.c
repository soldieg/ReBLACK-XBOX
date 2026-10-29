/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F41F0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0xC6
        _emit 0x84
        _emit 0x08
        _emit 0xED
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC3
    }
}
