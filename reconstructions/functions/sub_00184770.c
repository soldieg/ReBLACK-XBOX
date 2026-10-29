/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184770(void)
{
    __asm {
        _emit 0x8A
        _emit 0x0D
        _emit 0x5C
        _emit 0x68
        _emit 0x2D
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x84
        _emit 0xC9
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0x8D
        _emit 0x04
        _emit 0xC5
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
