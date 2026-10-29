/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0F70(void)
{
    __asm {
        _emit 0xC7
        _emit 0x40
        _emit 0x48
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
