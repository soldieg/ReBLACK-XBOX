/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5780(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x66
        _emit 0x8B
        _emit 0x04
        _emit 0x4A
        _emit 0x66
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0x48
        _emit 0x66
        _emit 0x89
        _emit 0x04
        _emit 0x4A
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
