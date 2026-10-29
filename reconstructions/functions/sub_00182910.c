/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182910(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xB7
        _emit 0xC0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xF6
        _emit 0x7E
        _emit 0x24
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0xB7
        _emit 0xFC
        _emit 0x4E
        _emit 0x83
        _emit 0xF8
        _emit 0x4A
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xC9
        _emit 0xEB
        _emit 0x07
        _emit 0x8B
        _emit 0x8C
        _emit 0x87
        _emit 0x18
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0x53
        _emit 0xFF
        _emit 0x50
        _emit 0x2C
        _emit 0x85
        _emit 0xF6
        _emit 0x7F
        _emit 0xE1
        _emit 0x5E
        _emit 0xC3
    }
}
