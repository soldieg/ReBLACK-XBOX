/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BE720(void)
{
    __asm {
        _emit 0xB8
        _emit 0x84
        _emit 0xE5
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
