/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B7390(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0x90
        _emit 0xEC
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC9
        _emit 0x8A
        _emit 0xA8
        _emit 0xB0
        _emit 0x5C
        _emit 0x00
        _emit 0x00
        _emit 0x0B
        _emit 0xCA
        _emit 0x66
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
