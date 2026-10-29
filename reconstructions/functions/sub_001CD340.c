/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001CD340(void)
{
    __asm {
        _emit 0x05
        _emit 0x78
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xB5
        _emit 0xCB
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
