/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181A40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x11
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x8B
        _emit 0x09
        _emit 0x89
        _emit 0x08
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
