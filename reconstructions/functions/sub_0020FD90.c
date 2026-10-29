/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0020FD90(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x72
        _emit 0x08
        _emit 0x8B
        _emit 0x10
        _emit 0x8B
        _emit 0xC8
        _emit 0x2B
        _emit 0xCE
        _emit 0x03
        _emit 0xD1
        _emit 0x89
        _emit 0x10
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
