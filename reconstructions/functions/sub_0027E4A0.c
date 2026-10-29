/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0027E4A0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xFF
        _emit 0x15
        _emit 0x04
        _emit 0x31
        _emit 0x28
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
