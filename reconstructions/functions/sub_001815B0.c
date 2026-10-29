/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001815B0(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8A
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x88
        _emit 0x48
        _emit 0x0C
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
