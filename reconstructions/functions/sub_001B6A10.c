/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6A10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0xC3
    }
}
