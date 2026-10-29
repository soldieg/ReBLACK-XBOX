/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00159110(void)
{
    __asm {
        _emit 0x83
        _emit 0xC0
        _emit 0x24
        _emit 0x89
        _emit 0x04
        _emit 0x8D
        _emit 0x30
        _emit 0xEF
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
