/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BF670(void)
{
    __asm {
        _emit 0x83
        _emit 0xB9
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x75
        _emit 0x09
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE9
        _emit 0x0E
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xE9
        _emit 0x19
        _emit 0x52
        _emit 0xFF
        _emit 0xFF
    }
}
