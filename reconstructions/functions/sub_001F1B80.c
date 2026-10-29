/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1B80(void)
{
    __asm {
        _emit 0xC1
        _emit 0xE0
        _emit 0x08
        _emit 0x83
        _emit 0xBC
        _emit 0x08
        _emit 0xE4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x0F
        _emit 0x9D
        _emit 0xC0
        _emit 0xC3
    }
}
