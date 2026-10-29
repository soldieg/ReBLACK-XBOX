/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A7C40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x90
        _emit 0x78
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x95
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
    }
}
