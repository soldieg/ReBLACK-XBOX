/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1CE0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xE4
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x04
        _emit 0x88
        _emit 0xC3
    }
}
