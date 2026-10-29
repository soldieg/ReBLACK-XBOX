/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181680(void)
{
    __asm {
        _emit 0x8A
        _emit 0x48
        _emit 0x50
        _emit 0x80
        _emit 0xE1
        _emit 0xFE
        _emit 0x80
        _emit 0xC9
        _emit 0x02
        _emit 0x88
        _emit 0x48
        _emit 0x50
        _emit 0xC3
    }
}
