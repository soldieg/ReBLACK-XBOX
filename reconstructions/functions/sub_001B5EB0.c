/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5EB0(void)
{
    __asm {
        _emit 0xB8
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
