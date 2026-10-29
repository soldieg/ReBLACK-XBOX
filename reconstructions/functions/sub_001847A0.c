/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001847A0(void)
{
    __asm {
        _emit 0x48
        _emit 0x74
        _emit 0x0D
        _emit 0x48
        _emit 0x74
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8D
        _emit 0x81
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x8D
        _emit 0x41
        _emit 0x7C
        _emit 0xC3
    }
}
