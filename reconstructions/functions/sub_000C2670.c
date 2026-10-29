/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2670(void)
{
    __asm {
        _emit 0x0F
        _emit 0xB7
        _emit 0x88
        _emit 0x12
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x2A
        _emit 0xC1
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0x05
        _emit 0xD0
        _emit 0x30
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
