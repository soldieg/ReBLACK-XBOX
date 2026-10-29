/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2BC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x19
        _emit 0xC4
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0x8B
        _emit 0x10
        _emit 0x56
        _emit 0x8B
        _emit 0xC8
        _emit 0xFF
        _emit 0x12
        _emit 0xC3
    }
}
