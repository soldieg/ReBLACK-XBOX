/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181690(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x20
        _emit 0x8B
        _emit 0x4C
        _emit 0x88
        _emit 0x24
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x62
        _emit 0x38
    }
}
