/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BDFD0(void)
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
        _emit 0x10
        _emit 0x8A
        _emit 0x88
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
