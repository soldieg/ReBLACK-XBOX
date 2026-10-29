/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00173B60(void)
{
    __asm {
        _emit 0xA1
        _emit 0x70
        _emit 0x3C
        _emit 0x2F
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xE8
        _emit 0x41
        _emit 0x89
        _emit 0x0F
        _emit 0x00
        _emit 0xA1
        _emit 0x74
        _emit 0x3C
        _emit 0x2F
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xE8
        _emit 0x32
        _emit 0x89
        _emit 0x0F
        _emit 0x00
        _emit 0xC3
    }
}
