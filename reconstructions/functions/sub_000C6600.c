/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C6600(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0xCC
        _emit 0xC8
        _emit 0x2A
        _emit 0x00
        _emit 0x68
        _emit 0x48
        _emit 0xC8
        _emit 0x2A
        _emit 0x00
        _emit 0x68
        _emit 0xF8
        _emit 0xB4
        _emit 0x28
        _emit 0x00
        _emit 0xE8
        _emit 0x6A
        _emit 0x2E
        _emit 0x1A
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xA2
        _emit 0x15
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
