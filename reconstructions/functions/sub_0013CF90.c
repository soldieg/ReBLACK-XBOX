/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013CF90(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC6
        _emit 0x80
        _emit 0x84
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x80
        _emit 0x74
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
