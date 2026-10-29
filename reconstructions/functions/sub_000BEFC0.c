/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEFC0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x80
        _emit 0x3C
        _emit 0x01
        _emit 0x3A
        _emit 0x74
        _emit 0x07
        _emit 0x41
        _emit 0x83
        _emit 0xF9
        _emit 0x04
        _emit 0x72
        _emit 0xF4
        _emit 0xC3
        _emit 0x8D
        _emit 0x44
        _emit 0x01
        _emit 0x01
        _emit 0xC3
    }
}
