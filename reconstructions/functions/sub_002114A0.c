/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002114A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4D
        _emit 0xD8
        _emit 0xE9
        _emit 0xF8
        _emit 0x3B
        _emit 0xE8
        _emit 0xFF
    }
}
