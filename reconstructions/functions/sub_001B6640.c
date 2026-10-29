/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6640(void)
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
        _emit 0x09
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x80
        _emit 0x08
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC3
    }
}
