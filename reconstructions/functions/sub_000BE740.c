/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BE740(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x14
        _emit 0x99
        _emit 0x83
        _emit 0xE2
        _emit 0x07
        _emit 0x03
        _emit 0xC2
        _emit 0xC1
        _emit 0xF8
        _emit 0x03
        _emit 0x0F
        _emit 0xAF
        _emit 0x41
        _emit 0x10
        _emit 0x0F
        _emit 0xAF
        _emit 0x41
        _emit 0x0C
        _emit 0xC3
    }
}
