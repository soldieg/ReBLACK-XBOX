/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1EE0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xCC
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x08
        _emit 0x89
        _emit 0x0A
        _emit 0xC3
    }
}
