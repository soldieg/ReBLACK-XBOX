/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BE550(void)
{
    __asm {
        _emit 0xFF
        _emit 0x05
        _emit 0x68
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
