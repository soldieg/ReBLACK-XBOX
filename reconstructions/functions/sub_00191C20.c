/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00191C20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x8B
        _emit 0x81
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x83
        _emit 0xC0
        _emit 0x10
        _emit 0x81
        _emit 0xC1
        _emit 0x20
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x75
        _emit 0xB8
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
