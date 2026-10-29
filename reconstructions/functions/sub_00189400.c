/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00189400(void)
{
    __asm {
        _emit 0x85
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x74
        _emit 0x17
        _emit 0x0F
        _emit 0x28
        _emit 0x81
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x50
        _emit 0x0F
        _emit 0x28
        _emit 0x40
        _emit 0x50
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x30
        _emit 0xC6
        _emit 0x40
        _emit 0x40
        _emit 0x00
        _emit 0xC3
    }
}
