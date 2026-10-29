/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017A1B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0x9C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x8A
        _emit 0x80
        _emit 0x05
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
