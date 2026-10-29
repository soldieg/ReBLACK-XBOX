/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E50F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x10
        _emit 0x8B
        _emit 0x0D
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x08
        _emit 0x89
        _emit 0x0C
        _emit 0x96
        _emit 0xFF
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0x5E
        _emit 0xFF
        _emit 0x20
    }
}
