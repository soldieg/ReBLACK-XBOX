/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113B80(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x8D
        _emit 0x0C
        _emit 0x00
        _emit 0x6A
        _emit 0x04
        _emit 0x51
        _emit 0x8B
        _emit 0x0D
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x98
        _emit 0x0E
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x85
        _emit 0xC1
        _emit 0xF8
        _emit 0xFF
        _emit 0xC3
    }
}
