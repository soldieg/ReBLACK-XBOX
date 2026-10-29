/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2940(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x2C
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC3
    }
}
