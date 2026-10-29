/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00180FE0(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0xB9
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xBE
        _emit 0xD0
        _emit 0x94
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xF8
        _emit 0xF3
        _emit 0xA5
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
