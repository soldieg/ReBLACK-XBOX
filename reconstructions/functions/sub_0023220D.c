/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0023220D(void)
{
    __asm {
        _emit 0xC9
        _emit 0xCF
        _emit 0x04
        _emit 0x04
        _emit 0x00
        _emit 0x0A
        _emit 0x00
        _emit 0x0D
        _emit 0x00
        _emit 0x0F
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0xCB
    }
}
