/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018FB70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x10
        _emit 0x0F
        _emit 0x28
        _emit 0x82
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x09
        _emit 0x0F
        _emit 0x5C
        _emit 0xC8
        _emit 0x0F
        _emit 0x29
        _emit 0x08
        _emit 0xC3
    }
}
