/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB950(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x34
        _emit 0x8B
        _emit 0x51
        _emit 0x0C
        _emit 0x8B
        _emit 0x42
        _emit 0x58
        _emit 0xC7
        _emit 0x80
        _emit 0xAC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
