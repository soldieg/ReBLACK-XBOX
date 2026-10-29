/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A354C(void)
{
    __asm {
        _emit 0xBA
        _emit 0x12
        _emit 0xC9
        _emit 0x29
        _emit 0x00
        _emit 0xE9
        _emit 0x07
        _emit 0x35
        _emit 0x00
        _emit 0x00
    }
}
