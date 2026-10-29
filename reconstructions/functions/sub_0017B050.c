/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017B050(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x50
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x82
        _emit 0x38
        _emit 0x85
        _emit 0xF6
        _emit 0x5E
        _emit 0x7D
        _emit 0x06
        _emit 0xB8
        _emit 0xC0
        _emit 0x55
        _emit 0x56
        _emit 0x00
        _emit 0xC3
        _emit 0x8B
        _emit 0x44
        _emit 0x81
        _emit 0x30
        _emit 0xC3
    }
}
