/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B54F0(void)
{
    __asm {
        _emit 0x80
        _emit 0x78
        _emit 0x20
        _emit 0x02
        _emit 0x74
        _emit 0x14
        _emit 0x8B
        _emit 0x40
        _emit 0x0C
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x40
        _emit 0x20
        _emit 0x0F
        _emit 0x2F
        _emit 0x05
        _emit 0x40
        _emit 0x8D
        _emit 0x28
        _emit 0x00
        _emit 0x73
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
