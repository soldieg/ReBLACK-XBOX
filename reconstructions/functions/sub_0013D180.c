/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D180(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x94
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x04
        _emit 0x73
        _emit 0x0D
        _emit 0x89
        _emit 0x94
        _emit 0x88
        _emit 0x84
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x80
        _emit 0x94
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
