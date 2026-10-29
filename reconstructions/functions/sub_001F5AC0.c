/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F5AC0(void)
{
    __asm {
        _emit 0xB8
        _emit 0x30
        _emit 0x46
        _emit 0x2D
        _emit 0x00
        _emit 0xC3
    }
}
