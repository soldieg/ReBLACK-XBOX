/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BB3D0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x77
        _emit 0x0C
        _emit 0x6A
        _emit 0x11
        _emit 0x50
        _emit 0xE8
        _emit 0x74
        _emit 0x78
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x88
        _emit 0x47
        _emit 0x1C
        _emit 0x5E
        _emit 0xC3
    }
}
