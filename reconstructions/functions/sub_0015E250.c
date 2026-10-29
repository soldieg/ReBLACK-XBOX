/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015E250(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x51
        _emit 0xE8
        _emit 0x58
        _emit 0xEE
        _emit 0xF6
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
