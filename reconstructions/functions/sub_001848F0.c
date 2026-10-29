/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001848F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xDC
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x90
        _emit 0x00
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x91
        _emit 0xDC
        _emit 0x2C
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
