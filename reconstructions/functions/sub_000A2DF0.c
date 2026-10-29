/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A2DF0(void)
{
    __asm {
        _emit 0x56
        _emit 0x43
        _emit 0x32
        _emit 0x30
        _emit 0x58
        _emit 0x43
        _emit 0x30
        _emit 0x30
    }
}
