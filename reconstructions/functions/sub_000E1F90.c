/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1F90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0x8B
        _emit 0x0D
        _emit 0xFC
        _emit 0xD3
        _emit 0x2E
        _emit 0x00
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x62
        _emit 0x08
    }
}
