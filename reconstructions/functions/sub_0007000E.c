/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0007000E(void)
{
    __asm {
        _emit 0x8B
        _emit 0xD1
        _emit 0x3B
        _emit 0xD0
        _emit 0x72
        _emit 0x8C
        _emit 0x5F
        _emit 0x5E
        _emit 0x5D
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5B
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
