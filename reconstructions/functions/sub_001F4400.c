/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x38
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x83
        _emit 0xC8
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x38
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0x89
        _emit 0x51
        _emit 0x2C
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
