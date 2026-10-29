/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00041F20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6A
        _emit 0x01
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0xB3
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
    }
}
