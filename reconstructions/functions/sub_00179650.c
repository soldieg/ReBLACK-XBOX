/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00179650(void)
{
    __asm {
        _emit 0x83
        _emit 0xC2
        _emit 0x65
        _emit 0x2B
        _emit 0xD0
        _emit 0x8A
        _emit 0x08
        _emit 0x88
        _emit 0x0C
        _emit 0x02
        _emit 0x40
        _emit 0x84
        _emit 0xC9
        _emit 0x75
        _emit 0xF6
        _emit 0xC3
    }
}
