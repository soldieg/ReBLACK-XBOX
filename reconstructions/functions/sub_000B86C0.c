/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B86C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x88
        _emit 0x04
        _emit 0xC3
    }
}
