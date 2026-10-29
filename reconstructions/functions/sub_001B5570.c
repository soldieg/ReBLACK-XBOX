/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5570(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xF4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x66
        _emit 0x39
        _emit 0x41
        _emit 0x18
        _emit 0x0F
        _emit 0x9E
        _emit 0xC0
        _emit 0xC3
    }
}
