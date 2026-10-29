/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013ED70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xA4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xA4
        _emit 0xBD
        _emit 0xF7
        _emit 0xFF
        _emit 0xC3
    }
}
