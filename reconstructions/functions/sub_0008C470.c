/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0008C470(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0xE8
        _emit 0x76
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xD9
        _emit 0x18
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
