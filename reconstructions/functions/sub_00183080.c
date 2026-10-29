/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183080(void)
{
    __asm {
        _emit 0xFF
        _emit 0x40
        _emit 0x54
        _emit 0xC3
    }
}
