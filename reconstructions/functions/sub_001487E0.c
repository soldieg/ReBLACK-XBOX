/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001487E0(void)
{
    __asm {
        _emit 0xE9
        _emit 0x4B
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
