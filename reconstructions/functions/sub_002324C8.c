/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002324C8(void)
{
    __asm {
        _emit 0xBF
        _emit 0x04
        _emit 0x00
        _emit 0x04
        _emit 0xFD
        _emit 0xCB
    }
}
