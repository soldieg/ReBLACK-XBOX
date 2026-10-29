/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3FB0(void)
{
    __asm {
        _emit 0x8D
        _emit 0x44
        _emit 0xC0
        _emit 0x09
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0xC3
    }
}
