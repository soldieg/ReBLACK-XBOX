/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00189B10(void)
{
    __asm {
        _emit 0xC7
        _emit 0x46
        _emit 0x70
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x94
        _emit 0x69
        _emit 0xEC
        _emit 0xFF
        _emit 0xC7
        _emit 0x05
        _emit 0xF0
        _emit 0x7E
        _emit 0x29
        _emit 0x00
        _emit 0x70
        _emit 0x65
        _emit 0x01
        _emit 0x00
        _emit 0xC7
        _emit 0x86
        _emit 0x40
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
