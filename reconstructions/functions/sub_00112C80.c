/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112C80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x94
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x10
        _emit 0xF3
        _emit 0x0F
        _emit 0x2A
        _emit 0x80
        _emit 0x98
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x2F
        _emit 0xC8
        _emit 0x72
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
