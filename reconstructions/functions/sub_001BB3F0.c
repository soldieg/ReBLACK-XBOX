/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BB3F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x90
        _emit 0xF4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x75
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
    }
}
