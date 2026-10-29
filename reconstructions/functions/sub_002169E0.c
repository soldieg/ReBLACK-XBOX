/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002169E0(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0xDC
        _emit 0xE4
        _emit 0x2B
        _emit 0x00
        _emit 0x30
        _emit 0xE4
        _emit 0x2B
        _emit 0x00
        _emit 0xC3
    }
}
