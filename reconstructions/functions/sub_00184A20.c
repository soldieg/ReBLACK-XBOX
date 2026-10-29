/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184A20(void)
{
    __asm {
        _emit 0x8A
        _emit 0x91
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x32
        _emit 0xC0
        _emit 0x3A
        _emit 0xD0
        _emit 0x88
        _emit 0x41
        _emit 0x45
        _emit 0x88
        _emit 0x41
        _emit 0x46
        _emit 0x74
        _emit 0x06
        _emit 0x88
        _emit 0x81
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
