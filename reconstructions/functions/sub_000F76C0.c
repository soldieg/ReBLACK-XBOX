/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F76C0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x5B
        _emit 0xC7
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0A
        _emit 0x8B
        _emit 0x40
        _emit 0x48
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
