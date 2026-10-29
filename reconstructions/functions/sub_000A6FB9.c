/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A6FB9(void)
{
    __asm {
        _emit 0x83
        _emit 0xEC
        _emit 0x08
        _emit 0xDD
        _emit 0x14
        _emit 0x24
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0xF0
        _emit 0x7F
        _emit 0xEB
        _emit 0x14
    }
}
