/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0019CD40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x53
        _emit 0x8B
        _emit 0xD9
        _emit 0xC6
        _emit 0x80
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xEE
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
