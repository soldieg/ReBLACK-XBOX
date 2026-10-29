/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002114F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x50
        _emit 0x8B
        _emit 0x4D
        _emit 0xD8
        _emit 0x51
        _emit 0xE8
        _emit 0x03
        _emit 0xF9
        _emit 0xE3
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
