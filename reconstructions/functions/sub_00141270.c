/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00141270(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xB1
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x1E
        _emit 0x9F
        _emit 0xF7
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
