/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0F40(void)
{
    __asm {
        _emit 0x83
        _emit 0x79
        _emit 0x48
        _emit 0x1C
        _emit 0x75
        _emit 0x10
        _emit 0x8A
        _emit 0x41
        _emit 0x65
        _emit 0x84
        _emit 0xC0
        _emit 0x7C
        _emit 0x09
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
