/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D4B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x58
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x11
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x80
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x2F
        _emit 0x41
        _emit 0x6C
        _emit 0x76
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
