/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217F60(void)
{
    __asm {
        _emit 0xB9
        _emit 0x71
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0xE9
        _emit 0xA6
        _emit 0x7B
        _emit 0xFF
        _emit 0xFF
    }
}
