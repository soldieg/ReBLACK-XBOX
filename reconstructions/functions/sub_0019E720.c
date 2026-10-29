/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019E720(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xE9
        _emit 0xC9
        _emit 0x4F
        _emit 0xFF
        _emit 0xFF
    }
}
