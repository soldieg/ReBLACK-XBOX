/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00231BA6(void)
{
    __asm {
        _emit 0x53
        _emit 0xC9
        _emit 0x04
        _emit 0x00
        _emit 0x0B
        _emit 0x00
        _emit 0x12
        _emit 0x00
        _emit 0x15
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x12
        _emit 0xCA
        _emit 0xFC
        _emit 0xCB
    }
}
