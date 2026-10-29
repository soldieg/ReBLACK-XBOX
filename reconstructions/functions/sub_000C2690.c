/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2690(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
