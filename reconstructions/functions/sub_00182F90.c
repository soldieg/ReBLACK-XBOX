/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182F90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x40
        _emit 0x89
        _emit 0x90
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xC7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
