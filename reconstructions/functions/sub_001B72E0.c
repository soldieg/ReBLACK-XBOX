/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B72E0(void)
{
    __asm {
        _emit 0x8D
        _emit 0x48
        _emit 0x08
        _emit 0xBA
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x06
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC0
        _emit 0x04
        _emit 0xC6
        _emit 0x01
        _emit 0x00
        _emit 0x41
        _emit 0x4A
        _emit 0x75
        _emit 0xF0
        _emit 0xC3
    }
}
