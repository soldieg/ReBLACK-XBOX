/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183970(void)
{
    __asm {
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x2B
        _emit 0x81
        _emit 0x44
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
