/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AA4CC(void)
{
    __asm {
        _emit 0x8B
        _emit 0x7D
        _emit 0x08
    }
}
