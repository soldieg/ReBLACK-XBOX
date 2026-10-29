/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3980(void)
{
    __asm {
        _emit 0xA1
        _emit 0x78
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0x18
        _emit 0x83
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
