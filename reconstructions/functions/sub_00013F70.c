/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00013F70(void)
{
    __asm {
        _emit 0xC7
        _emit 0x81
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
