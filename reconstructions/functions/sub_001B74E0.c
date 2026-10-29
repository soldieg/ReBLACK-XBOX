/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B74E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
