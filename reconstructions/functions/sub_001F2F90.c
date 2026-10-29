/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2F90(void)
{
    __asm {
        _emit 0x05
        _emit 0x4A
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
