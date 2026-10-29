/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184CE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x38
        _emit 0x04
        _emit 0x75
        _emit 0x11
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x8A
        _emit 0x82
        _emit 0x35
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x04
        _emit 0xC6
        _emit 0x41
        _emit 0x28
        _emit 0x01
        _emit 0x32
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0xCC
    }
}
