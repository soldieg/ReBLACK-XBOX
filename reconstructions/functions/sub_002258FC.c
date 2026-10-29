/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002258FC(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0C
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x50
        _emit 0x20
        _emit 0x03
        _emit 0x50
        _emit 0x18
        _emit 0x89
        _emit 0x11
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
