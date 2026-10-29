/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0027FA56(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xC6
        _emit 0x00
        _emit 0xFF
        _emit 0xC6
        _emit 0x40
        _emit 0x01
        _emit 0x80
        _emit 0xC6
        _emit 0x40
        _emit 0x02
        _emit 0x80
        _emit 0xC6
        _emit 0x40
        _emit 0x03
        _emit 0x80
        _emit 0xC3
    }
}
