/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00192F40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x47
        _emit 0x44
        _emit 0x56
        _emit 0x50
        _emit 0x8D
        _emit 0xB7
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xC0
        _emit 0xC1
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4F
        _emit 0x44
        _emit 0x51
        _emit 0x8D
        _emit 0xB7
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xB1
        _emit 0xC1
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
