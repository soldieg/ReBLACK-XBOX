/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002178E0(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0x80
        _emit 0x4A
        _emit 0x2B
        _emit 0x00
        _emit 0xD0
        _emit 0x46
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
