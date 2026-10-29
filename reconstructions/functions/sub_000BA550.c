/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BA550(void)
{
    __asm {
        _emit 0x8B
        _emit 0x10
        _emit 0x89
        _emit 0x14
        _emit 0xCD
        _emit 0x58
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x89
        _emit 0x04
        _emit 0xCD
        _emit 0x5C
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
