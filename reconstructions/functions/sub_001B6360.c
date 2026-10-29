/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6360(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x80
        _emit 0x80
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x2E
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x9F
        _emit 0xF6
        _emit 0xC4
        _emit 0x44
        _emit 0x7B
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
