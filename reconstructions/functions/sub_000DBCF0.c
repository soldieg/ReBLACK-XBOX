/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DBCF0(void)
{
    __asm {
        _emit 0x51
        _emit 0xF7
        _emit 0xD0
        _emit 0x8B
        _emit 0xC8
        _emit 0xF7
        _emit 0xD9
        _emit 0x23
        _emit 0xC8
        _emit 0xF3
        _emit 0x0F
        _emit 0x2A
        _emit 0xC1
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x04
        _emit 0x24
        _emit 0x8B
        _emit 0x04
        _emit 0x24
        _emit 0xC1
        _emit 0xE8
        _emit 0x17
        _emit 0x83
        _emit 0xE8
        _emit 0x7F
        _emit 0x59
        _emit 0xC3
    }
}
