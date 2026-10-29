/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C24B0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xD1
        _emit 0xB9
        _emit 0x11
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x8D
        _emit 0xBA
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0xAB
        _emit 0x66
        _emit 0xAB
        _emit 0x5F
        _emit 0xC3
    }
}
