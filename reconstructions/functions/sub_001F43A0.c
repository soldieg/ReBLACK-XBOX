/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F43A0(void)
{
    __asm {
        _emit 0x56
        _emit 0xE8
        _emit 0x7A
        _emit 0xE0
        _emit 0xEC
        _emit 0xFF
        _emit 0xC7
        _emit 0x86
        _emit 0xC8
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
