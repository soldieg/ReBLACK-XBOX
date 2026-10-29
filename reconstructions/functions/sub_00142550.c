/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00142550(void)
{
    __asm {
        _emit 0x81
        _emit 0xC1
        _emit 0xB0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x95
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
    }
}
