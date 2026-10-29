/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182650(void)
{
    __asm {
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x02
        _emit 0x89
        _emit 0x01
        _emit 0xC3
    }
}
