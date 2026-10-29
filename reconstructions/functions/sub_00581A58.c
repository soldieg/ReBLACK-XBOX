/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00581A58(void)
{
    __asm {
        _emit 0x40
        _emit 0x1B
        _emit 0xD0
        _emit 0x00
        _emit 0xD3
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x72
        _emit 0x01
        _emit 0x04
        _emit 0x00
        _emit 0xC2
        _emit 0xC6
        _emit 0x0F
    }
}
