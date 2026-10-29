/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00159460(void)
{
    __asm {
        _emit 0xC7
        _emit 0x40
        _emit 0x34
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x90
        _emit 0xD6
        _emit 0x2A
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x10
        _emit 0xC3
    }
}
