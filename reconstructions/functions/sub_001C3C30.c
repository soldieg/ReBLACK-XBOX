/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C3C30(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0x8A
        _emit 0xD6
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
