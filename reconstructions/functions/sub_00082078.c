/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00082078(void)
{
    __asm {
        _emit 0x0F
        _emit 0x95
        _emit 0xC2
        _emit 0x89
        _emit 0x11
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xC3
    }
}
