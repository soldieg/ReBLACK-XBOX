/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E36F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0xFF
        _emit 0x15
        _emit 0x5C
        _emit 0x2B
        _emit 0x56
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
