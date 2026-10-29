/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182320(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x08
        _emit 0x0F
        _emit 0xBE
        _emit 0xC8
        _emit 0x4A
        _emit 0x3B
        _emit 0xCA
        _emit 0x7D
        _emit 0x02
        _emit 0xFE
        _emit 0xC0
        _emit 0xC3
    }
}
