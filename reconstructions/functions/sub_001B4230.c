/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B4230(void)
{
    __asm {
        _emit 0x3B
        _emit 0x48
        _emit 0x70
        _emit 0x75
        _emit 0x0A
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x70
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xC3
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x74
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x16
        _emit 0xC3
    }
}
