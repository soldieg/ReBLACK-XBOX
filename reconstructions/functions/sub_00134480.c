/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00134480(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x60
        _emit 0xE9
        _emit 0x03
        _emit 0xC2
        _emit 0xFF
        _emit 0xFF
    }
}
