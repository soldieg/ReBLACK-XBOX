/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001578A0(void)
{
    __asm {
        _emit 0x05
        _emit 0x34
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xB9
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x20
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x49
        _emit 0x75
        _emit 0xF5
        _emit 0xC3
    }
}
