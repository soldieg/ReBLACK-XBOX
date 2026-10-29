/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00222D32(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC1
        _emit 0xF4
        _emit 0xE8
        _emit 0x85
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
