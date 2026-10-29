/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182770(void)
{
    __asm {
        _emit 0x88
        _emit 0x48
        _emit 0x34
        _emit 0xC3
    }
}
