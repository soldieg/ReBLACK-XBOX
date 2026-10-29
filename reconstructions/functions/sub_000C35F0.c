/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C35F0(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0x89
        _emit 0x50
        _emit 0x34
        _emit 0xC3
    }
}
