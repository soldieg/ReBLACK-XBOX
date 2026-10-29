/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00189D10(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x41
        _emit 0x30
        _emit 0x0F
        _emit 0x28
        _emit 0x49
        _emit 0x10
        _emit 0x0F
        _emit 0x58
        _emit 0xC8
        _emit 0x0F
        _emit 0x29
        _emit 0x08
        _emit 0xC3
    }
}
