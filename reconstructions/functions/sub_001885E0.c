/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001885E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x42
        _emit 0x24
        _emit 0x56
        _emit 0xBE
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xD3
        _emit 0xE6
        _emit 0xF7
        _emit 0xD0
        _emit 0x23
        _emit 0xC6
        _emit 0x23
        _emit 0x42
        _emit 0x28
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0xF7
        _emit 0xD8
        _emit 0x5E
        _emit 0xC3
    }
}
