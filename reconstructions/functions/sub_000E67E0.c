/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E67E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x08
        _emit 0xA1
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xC1
        _emit 0xE1
        _emit 0x02
        _emit 0xE9
        _emit 0x8E
        _emit 0xF0
        _emit 0xFF
        _emit 0xFF
    }
}
