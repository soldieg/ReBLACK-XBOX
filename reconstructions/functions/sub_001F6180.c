/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6180(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0x8B
        _emit 0x81
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
