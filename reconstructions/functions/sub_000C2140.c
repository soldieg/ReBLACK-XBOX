/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2140(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x28
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x12
        _emit 0x83
        _emit 0x79
        _emit 0x20
        _emit 0x02
        _emit 0x75
        _emit 0x0C
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x81
        _emit 0x44
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
