/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00179590(void)
{
    __asm {
        _emit 0x8B
        _emit 0x11
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x8B
        _emit 0x14
        _emit 0x82
        _emit 0x89
        _emit 0x14
        _emit 0x81
        _emit 0xC3
    }
}
