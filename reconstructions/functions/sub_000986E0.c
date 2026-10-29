/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000986E0(void)
{
    __asm {
        _emit 0xD9
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
