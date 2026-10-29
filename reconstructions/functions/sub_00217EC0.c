/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217EC0(void)
{
    __asm {
        _emit 0xB9
        _emit 0x21
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0xE9
        _emit 0x46
        _emit 0x7C
        _emit 0xFF
        _emit 0xFF
    }
}
