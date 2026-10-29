/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E4550(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0xD0
        _emit 0xD1
        _emit 0xEA
        _emit 0xF6
        _emit 0xC2
        _emit 0x01
        _emit 0x75
        _emit 0x0B
        _emit 0x83
        _emit 0xC8
        _emit 0x02
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x34
        _emit 0xC3
    }
}
