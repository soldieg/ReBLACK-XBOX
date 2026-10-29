/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181C90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xFA
        _emit 0xFF
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
