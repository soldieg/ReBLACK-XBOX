/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00186160(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x20
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x44
        _emit 0x81
        _emit 0x24
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0xC3
    }
}
