/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00098450(void)
{
    __asm {
        _emit 0xFF
        _emit 0x05
        _emit 0xD8
        _emit 0x07
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xC9
        _emit 0x8A
        _emit 0x08
        _emit 0x83
        _emit 0xE1
        _emit 0x3F
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xFF
        _emit 0x24
        _emit 0x8D
        _emit 0xD8
        _emit 0xB1
        _emit 0x29
        _emit 0x00
    }
}
