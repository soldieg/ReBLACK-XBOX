/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB210(void)
{
    __asm {
        _emit 0x51
        _emit 0x8B
        _emit 0x41
        _emit 0x30
        _emit 0x50
        _emit 0x33
        _emit 0xC0
        _emit 0xE8
        _emit 0x94
        _emit 0xF2
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
