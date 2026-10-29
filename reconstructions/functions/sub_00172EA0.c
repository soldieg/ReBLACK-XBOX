/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00172EA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x14
        _emit 0x51
        _emit 0x50
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x34
        _emit 0x5F
        _emit 0x0F
        _emit 0x00
        _emit 0xC3
    }
}
