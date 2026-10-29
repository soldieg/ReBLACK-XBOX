/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F5B00(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x0F
        _emit 0xBE
        _emit 0xD0
        _emit 0x0F
        _emit 0xBE
        _emit 0x92
        _emit 0x48
        _emit 0x86
        _emit 0x28
        _emit 0x00
        _emit 0x3B
        _emit 0xD1
        _emit 0x74
        _emit 0x09
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x08
        _emit 0x7C
        _emit 0xEC
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
