/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002143E0(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x08
        _emit 0x61
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x05
        _emit 0x7C
        _emit 0x29
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
