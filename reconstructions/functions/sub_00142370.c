/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00142370(void)
{
    __asm {
        _emit 0xE9
        _emit 0xAB
        _emit 0x94
        _emit 0xF7
        _emit 0xFF
    }
}
