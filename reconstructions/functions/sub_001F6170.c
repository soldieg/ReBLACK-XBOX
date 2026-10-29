/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F6170(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x10
        _emit 0x05
        _emit 0xB0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
