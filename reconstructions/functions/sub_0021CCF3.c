/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0021CCF3(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xCA
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
