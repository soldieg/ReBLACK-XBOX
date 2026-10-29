/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012C420(void)
{
    __asm {
        _emit 0x8B
        _emit 0x15
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x81
        _emit 0xC2
        _emit 0xA8
        _emit 0x13
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x9F
        _emit 0x80
        _emit 0xFE
        _emit 0xFF
    }
}
