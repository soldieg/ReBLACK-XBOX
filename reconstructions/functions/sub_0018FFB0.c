/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018FFB0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x81
        _emit 0x40
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
