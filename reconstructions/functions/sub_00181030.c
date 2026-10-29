/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181030(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC1
        _emit 0x20
        _emit 0x56
        _emit 0x8B
        _emit 0x31
        _emit 0x8B
        _emit 0xD0
        _emit 0x89
        _emit 0x32
        _emit 0x8B
        _emit 0x71
        _emit 0x04
        _emit 0x89
        _emit 0x72
        _emit 0x04
        _emit 0x8B
        _emit 0x71
        _emit 0x08
        _emit 0x89
        _emit 0x72
        _emit 0x08
        _emit 0x8B
        _emit 0x49
        _emit 0x0C
        _emit 0x89
        _emit 0x4A
        _emit 0x0C
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
