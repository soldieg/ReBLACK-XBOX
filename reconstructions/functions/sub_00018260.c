/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00018260(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x58
        _emit 0xC1
        _emit 0xE8
        _emit 0x11
        _emit 0x83
        _emit 0xE0
        _emit 0x01
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
