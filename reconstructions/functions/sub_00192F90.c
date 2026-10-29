/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00192F90(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x71
        _emit 0x14
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0x06
        _emit 0xB0
        _emit 0x01
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x8D
        _emit 0x84
        _emit 0x81
        _emit 0xAC
        _emit 0x0F
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xE9
        _emit 0x52
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xC8
        _emit 0xE8
        _emit 0x82
        _emit 0x81
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
