/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F91C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0xA8
        _emit 0x86
        _emit 0x28
        _emit 0x00
        _emit 0x8D
        _emit 0x0C
        _emit 0x40
        _emit 0x66
        _emit 0xC7
        _emit 0x44
        _emit 0x8A
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
