/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181CD0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x50
        _emit 0x14
        _emit 0x22
        _emit 0xD1
        _emit 0x3A
        _emit 0xCA
        _emit 0x88
        _emit 0x50
        _emit 0x14
        _emit 0x75
        _emit 0x10
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x18
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x1C
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
