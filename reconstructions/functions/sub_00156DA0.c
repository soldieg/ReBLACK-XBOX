/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00156DA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8A
        _emit 0x41
        _emit 0x06
        _emit 0x2A
        _emit 0x42
        _emit 0x06
        _emit 0x74
        _emit 0x04
        _emit 0x0F
        _emit 0xBE
        _emit 0xC0
        _emit 0xC3
        _emit 0x0F
        _emit 0xB7
        _emit 0x01
        _emit 0x56
        _emit 0x0F
        _emit 0xB7
        _emit 0x32
        _emit 0x2B
        _emit 0xC6
        _emit 0x5E
        _emit 0x75
        _emit 0x0A
        _emit 0x0F
        _emit 0xBF
        _emit 0x49
        _emit 0x02
        _emit 0x0F
        _emit 0xBF
        _emit 0x42
        _emit 0x02
        _emit 0x2B
        _emit 0xC1
        _emit 0xC3
    }
}
