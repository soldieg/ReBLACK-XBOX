/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5380(void)
{
    __asm {
        _emit 0x8B
        _emit 0x11
        _emit 0x8B
        _emit 0x4A
        _emit 0x04
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x8B
        _emit 0x44
        _emit 0x08
        _emit 0x18
        _emit 0xC3
    }
}
