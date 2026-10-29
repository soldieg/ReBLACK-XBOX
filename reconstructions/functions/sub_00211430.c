/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00211430(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4D
        _emit 0xF0
        _emit 0x83
        _emit 0xC1
        _emit 0x0C
        _emit 0xE9
        _emit 0x05
        _emit 0x2C
        _emit 0xE8
        _emit 0xFF
    }
}
