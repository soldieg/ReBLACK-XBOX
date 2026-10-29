/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00176610(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0x6A
        _emit 0xF5
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
