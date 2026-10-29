/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182DF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x78
        _emit 0x14
        _emit 0x01
        _emit 0x74
        _emit 0x07
        _emit 0x8A
        _emit 0x50
        _emit 0x71
        _emit 0x84
        _emit 0xD2
        _emit 0x74
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8D
        _emit 0x41
        _emit 0x20
        _emit 0xC3
    }
}
