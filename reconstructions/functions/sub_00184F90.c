/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184F90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0xC6
        _emit 0x80
        _emit 0x54
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x88
        _emit 0x82
        _emit 0xA2
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x5C
        _emit 0xC3
    }
}
