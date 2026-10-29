/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015E4F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x51
        _emit 0xE8
        _emit 0xB8
        _emit 0xEB
        _emit 0xF6
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
