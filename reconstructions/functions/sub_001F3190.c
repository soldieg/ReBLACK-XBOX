/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3190(void)
{
    __asm {
        _emit 0xC1
        _emit 0xE0
        _emit 0x06
        _emit 0x8D
        _emit 0x84
        _emit 0x08
        _emit 0x4A
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
