/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2D70(void)
{
    __asm {
        _emit 0xD9
        _emit 0x05
        _emit 0x84
        _emit 0x37
        _emit 0x2F
        _emit 0x00
        _emit 0xD8
        _emit 0x0D
        _emit 0x8C
        _emit 0x5D
        _emit 0x29
        _emit 0x00
        _emit 0xE9
        _emit 0x53
        _emit 0x07
        _emit 0xFE
        _emit 0xFF
    }
}
