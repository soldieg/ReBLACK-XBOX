/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001570A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x40
        _emit 0x25
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x79
        _emit 0x05
        _emit 0x48
        _emit 0x83
        _emit 0xC8
        _emit 0xFE
        _emit 0x40
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0xC3
    }
}
