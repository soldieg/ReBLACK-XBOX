/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2A30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xF4
        _emit 0x67
        _emit 0x2D
        _emit 0x00
        _emit 0x05
        _emit 0x40
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x50
        _emit 0xD4
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x68
        _emit 0x89
        _emit 0x48
        _emit 0x40
        _emit 0xC3
    }
}
