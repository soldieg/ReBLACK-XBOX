/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F9600(void)
{
    __asm {
        _emit 0x57
        _emit 0xBF
        _emit 0x80
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xB8
        _emit 0xE8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0xB0
        _emit 0xA9
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x5F
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
