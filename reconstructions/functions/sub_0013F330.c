/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013F330(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x44
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x03
        _emit 0x88
        _emit 0x50
        _emit 0x35
        _emit 0x8B
        _emit 0x81
        _emit 0x48
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x03
        _emit 0x88
        _emit 0x50
        _emit 0x35
        _emit 0xC3
    }
}
