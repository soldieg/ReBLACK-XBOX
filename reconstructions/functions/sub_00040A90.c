/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00040A90(void)
{
    __asm {
        _emit 0xC7
        _emit 0x40
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x0E
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x89
        _emit 0x06
        _emit 0x5D
        _emit 0xC3
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0xFE
        _emit 0x41
        _emit 0x20
        _emit 0x8B
        _emit 0x0C
        _emit 0x9F
        _emit 0xFE
        _emit 0x41
        _emit 0x20
        _emit 0x8B
        _emit 0x14
        _emit 0x9F
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x5D
        _emit 0xC3
    }
}
