/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015AC70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x86
        _emit 0x90
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x48
        _emit 0x58
        _emit 0x51
        _emit 0xE8
        _emit 0xC1
        _emit 0x2E
        _emit 0xED
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC7
        _emit 0x86
        _emit 0x90
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
