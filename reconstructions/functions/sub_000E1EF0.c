/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1EF0(void)
{
    __asm {
        _emit 0xB8
        _emit 0xE4
        _emit 0x42
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
