/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112C70(void)
{
    __asm {
        _emit 0x05
        _emit 0x9C
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
