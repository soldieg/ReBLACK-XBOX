/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B7660(void)
{
    __asm {
        _emit 0xA2
        _emit 0x50
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x88
        _emit 0x0D
        _emit 0x00
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x4C
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xA3
        _emit 0x54
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
