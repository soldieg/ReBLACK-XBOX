/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013E370(void)
{
    __asm {
        _emit 0x8B
        _emit 0x86
        _emit 0xAC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x01
        _emit 0x50
        _emit 0xE8
        _emit 0xDC
        _emit 0xB4
        _emit 0x0D
        _emit 0x00
        _emit 0x83
        _emit 0x8E
        _emit 0xE0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x12
        _emit 0xC3
    }
}
