/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001850C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0xA4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x41
        _emit 0x40
        _emit 0x00
        _emit 0xC3
    }
}
