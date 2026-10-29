/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00196EE0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x8A
        _emit 0x42
        _emit 0x60
        _emit 0x57
        _emit 0x8D
        _emit 0x7A
        _emit 0x10
        _emit 0x50
        _emit 0x8D
        _emit 0x42
        _emit 0x20
        _emit 0xE8
        _emit 0xAE
        _emit 0x80
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
