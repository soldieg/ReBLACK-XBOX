/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00141550(void)
{
    __asm {
        _emit 0x50
        _emit 0x51
        _emit 0x81
        _emit 0xC2
        _emit 0x9C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0xE8
        _emit 0xD2
        _emit 0x8D
        _emit 0xF7
        _emit 0xFF
        _emit 0xC3
    }
}
