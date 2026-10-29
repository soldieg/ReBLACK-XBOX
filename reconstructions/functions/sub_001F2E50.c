/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2E50(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x84
        _emit 0x11
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x91
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
