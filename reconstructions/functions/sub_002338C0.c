/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002338C0(void)
{
    __asm {
        _emit 0x57
        _emit 0xC9
        _emit 0xC2
        _emit 0xC9
        _emit 0x30
    }
}
