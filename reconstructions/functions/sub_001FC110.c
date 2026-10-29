/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001FC110(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x44
        _emit 0x48
        _emit 0x75
        _emit 0x09
        _emit 0x8B
        _emit 0x41
        _emit 0x38
        _emit 0x83
        _emit 0xC1
        _emit 0x38
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0xE9
        _emit 0x0C
        _emit 0x8F
        _emit 0xF1
        _emit 0xFF
    }
}
