/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181BC0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0x08
        _emit 0x60
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
