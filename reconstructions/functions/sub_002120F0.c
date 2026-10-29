/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002120F0(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x10
        _emit 0x5A
        _emit 0x2F
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x5C
        _emit 0x05
        _emit 0xD8
        _emit 0xA9
        _emit 0x28
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x05
        _emit 0xF0
        _emit 0x57
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
