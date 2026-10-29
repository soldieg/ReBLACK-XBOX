/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1CF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x91
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6B
        _emit 0xC0
        _emit 0x38
        _emit 0x03
        _emit 0xC2
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
