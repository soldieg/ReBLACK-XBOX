/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A84DD(void)
{
    __asm {
        _emit 0x8B
        _emit 0x5D
        _emit 0x08
        _emit 0x8B
        _emit 0x75
        _emit 0xE4
    }
}
