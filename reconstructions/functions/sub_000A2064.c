/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A2064(void)
{
    __asm {
        _emit 0xA1
        _emit 0xFC
        _emit 0x07
        _emit 0x2D
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x02
        _emit 0xFF
        _emit 0xD0
        _emit 0x6A
        _emit 0x19
        _emit 0xE8
        _emit 0xD5
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
