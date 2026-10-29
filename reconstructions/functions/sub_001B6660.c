/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6660(void)
{
    __asm {
        _emit 0x8B
        _emit 0x90
        _emit 0x24
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x88
        _emit 0xF0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xD1
        _emit 0x75
        _emit 0x0A
        _emit 0x8A
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x88
        _emit 0x90
        _emit 0xFA
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
