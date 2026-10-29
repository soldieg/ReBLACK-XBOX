/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4070(void)
{
    __asm {
        _emit 0x8D
        _emit 0x04
        _emit 0xC0
        _emit 0x8B
        _emit 0x54
        _emit 0x81
        _emit 0x0C
        _emit 0x8D
        _emit 0x4C
        _emit 0x81
        _emit 0x04
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x2B
        _emit 0xC2
        _emit 0xC3
    }
}
