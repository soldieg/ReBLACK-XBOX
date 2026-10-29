/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E2B30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x44
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0B
        _emit 0x3B
        _emit 0xC8
        _emit 0x74
        _emit 0x0A
        _emit 0x8B
        _emit 0x40
        _emit 0x44
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0xF5
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
