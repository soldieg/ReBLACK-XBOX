/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B84A0(void)
{
    __asm {
        _emit 0x8D
        _emit 0x04
        _emit 0xC5
        _emit 0x58
        _emit 0x3A
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
