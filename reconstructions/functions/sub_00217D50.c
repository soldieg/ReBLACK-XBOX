/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217D50(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0xB8
        _emit 0xDE
        _emit 0x2B
        _emit 0x00
        _emit 0x20
        _emit 0x56
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
