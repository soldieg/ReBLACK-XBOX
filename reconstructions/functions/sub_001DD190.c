/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001DD190(void)
{
    __asm {
        _emit 0xE8
        _emit 0x8B
        _emit 0xC1
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
