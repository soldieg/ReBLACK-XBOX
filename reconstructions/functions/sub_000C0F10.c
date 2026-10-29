/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0F10(void)
{
    __asm {
        _emit 0x8A
        _emit 0x40
        _emit 0x62
        _emit 0xC3
    }
}
