/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2440(void)
{
    __asm {
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
