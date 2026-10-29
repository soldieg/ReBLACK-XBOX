/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217630(void)
{
    __asm {
        _emit 0xB9
        _emit 0x64
        _emit 0x5B
        _emit 0x2F
        _emit 0x00
        _emit 0xE9
        _emit 0x86
        _emit 0x7D
        _emit 0xE3
        _emit 0xFF
    }
}
