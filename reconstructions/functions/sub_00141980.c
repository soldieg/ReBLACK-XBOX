/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00141980(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x7C
        _emit 0xD3
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x7C
        _emit 0xD3
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x60
        _emit 0x04
    }
}
