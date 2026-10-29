/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3410(void)
{
    __asm {
        _emit 0xA3
        _emit 0x80
        _emit 0xC3
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
