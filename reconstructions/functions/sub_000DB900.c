/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB900(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x8B
        _emit 0x51
        _emit 0x0C
        _emit 0x8B
        _emit 0x42
        _emit 0x58
        _emit 0xC3
    }
}
