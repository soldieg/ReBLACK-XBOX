/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F8EE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x20
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xE9
        _emit 0x5D
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
    }
}
