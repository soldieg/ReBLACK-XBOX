/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B7330(void)
{
    __asm {
        _emit 0x8A
        _emit 0x48
        _emit 0x39
        _emit 0x84
        _emit 0xC9
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
