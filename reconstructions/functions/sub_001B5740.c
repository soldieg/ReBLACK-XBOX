/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5740(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x04
        _emit 0x56
        _emit 0x66
        _emit 0x0F
        _emit 0xB6
        _emit 0xC9
        _emit 0x66
        _emit 0x3B
        _emit 0xC1
        _emit 0x73
        _emit 0x07
        _emit 0x66
        _emit 0xC7
        _emit 0x04
        _emit 0x56
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x2B
        _emit 0xC1
        _emit 0x66
        _emit 0x89
        _emit 0x04
        _emit 0x56
        _emit 0x66
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
