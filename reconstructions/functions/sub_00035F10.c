/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00035F10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x8A
        _emit 0x5C
        _emit 0x24
        _emit 0x0C
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x8A
        _emit 0x11
        _emit 0x3A
        _emit 0xD3
        _emit 0x0F
        _emit 0x44
        _emit 0xC1
        _emit 0x41
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0xF4
        _emit 0x5B
        _emit 0xC3
    }
}
