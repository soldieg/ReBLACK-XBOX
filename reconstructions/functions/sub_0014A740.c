/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0014A740(void)
{
    __asm {
        _emit 0x32
        _emit 0xC0
        _emit 0xE8
        _emit 0x39
        _emit 0x96
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
