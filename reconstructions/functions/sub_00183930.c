/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183930(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x31
        _emit 0x85
        _emit 0xF6
        _emit 0x7E
        _emit 0x0A
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x40
        _emit 0x99
        _emit 0xF7
        _emit 0xFE
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x5E
        _emit 0xC3
    }
}
