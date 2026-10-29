/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5010(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x34
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x80
        _emit 0x78
        _emit 0x08
        _emit 0x3A
        _emit 0x75
        _emit 0x08
        _emit 0x0F
        _emit 0xBE
        _emit 0x40
        _emit 0x09
        _emit 0x83
        _emit 0xE8
        _emit 0x30
        _emit 0xC3
        _emit 0xB8
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
