/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5770(void)
{
    __asm {
        _emit 0x66
        _emit 0x33
        _emit 0xC0
        _emit 0x66
        _emit 0x3B
        _emit 0x04
        _emit 0x51
        _emit 0x1B
        _emit 0xC0
        _emit 0xF7
        _emit 0xD8
        _emit 0xC3
    }
}
