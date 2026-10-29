/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00185150(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0xB0
        _emit 0x01
        _emit 0x88
        _emit 0x82
        _emit 0x55
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x88
        _emit 0x81
        _emit 0x8C
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
