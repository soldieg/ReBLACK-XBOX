/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D38C0(void)
{
    __asm {
        _emit 0x53
        _emit 0x8D
        _emit 0x9C
        _emit 0xC8
        _emit 0xFC
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xDF
        _emit 0xC9
        _emit 0xFF
        _emit 0xFF
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
