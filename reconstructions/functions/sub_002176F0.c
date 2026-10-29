/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002176F0(void)
{
    __asm {
        _emit 0x56
        _emit 0xBE
        _emit 0x08
        _emit 0x2C
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0x65
        _emit 0x2E
        _emit 0xE0
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
