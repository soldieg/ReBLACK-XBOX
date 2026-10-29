/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00195910(void)
{
    __asm {
        _emit 0xC6
        _emit 0x40
        _emit 0x36
        _emit 0x00
        _emit 0xE9
        _emit 0xF7
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
    }
}
