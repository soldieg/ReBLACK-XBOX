/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00120370(void)
{
    __asm {
        _emit 0xE8
        _emit 0xCB
        _emit 0x34
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8
        _emit 0xE6
        _emit 0xB2
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8
        _emit 0x41
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0xE9
        _emit 0x9C
        _emit 0xAE
        _emit 0xFF
        _emit 0xFF
    }
}
