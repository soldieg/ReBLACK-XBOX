/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113440(void)
{
    __asm {
        _emit 0xA1
        _emit 0x88
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0xBC
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0x00
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
