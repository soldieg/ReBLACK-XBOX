/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6EC0(void)
{
    __asm {
        _emit 0xB8
        _emit 0x80
        _emit 0x0D
        _emit 0x2D
        _emit 0x00
        _emit 0xE9
        _emit 0x36
        _emit 0xE6
        _emit 0xFF
        _emit 0xFF
    }
}
