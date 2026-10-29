/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5730(void)
{
    __asm {
        _emit 0x0F
        _emit 0xB7
        _emit 0x04
        _emit 0x48
        _emit 0x0F
        _emit 0xB6
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x99
        _emit 0xF7
        _emit 0xF9
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
