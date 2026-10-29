/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1EF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x10
        _emit 0x0F
        _emit 0xBE
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x04
        _emit 0x80
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x03
        _emit 0xC1
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
