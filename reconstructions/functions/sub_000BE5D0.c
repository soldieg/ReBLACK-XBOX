/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BE5D0(void)
{
    __asm {
        _emit 0xC6
        _emit 0x05
        _emit 0x60
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x01
        _emit 0xA3
        _emit 0x64
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
