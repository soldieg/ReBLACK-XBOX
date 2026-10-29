/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2310(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x18
        _emit 0x89
        _emit 0x90
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0xC3
    }
}
