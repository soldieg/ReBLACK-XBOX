/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112A00(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0x18
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
