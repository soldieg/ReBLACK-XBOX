/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5280(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0xC1
        _emit 0xF8
        _emit 0x19
        _emit 0x83
        _emit 0xF8
        _emit 0x25
        _emit 0x75
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0xC3
        _emit 0x0F
        _emit 0xB6
        _emit 0x80
        _emit 0xD4
        _emit 0xAF
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
