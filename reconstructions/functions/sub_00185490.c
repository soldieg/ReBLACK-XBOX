/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00185490(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x32
        _emit 0xC9
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x00
        _emit 0x88
        _emit 0x48
        _emit 0x08
        _emit 0x88
        _emit 0x48
        _emit 0x09
        _emit 0xC3
    }
}
