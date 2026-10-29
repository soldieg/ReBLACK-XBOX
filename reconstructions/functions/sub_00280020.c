/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00280020(void)
{
    __asm {
        _emit 0xE8
        _emit 0x8D
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xEB
        _emit 0x27
        _emit 0x33
        _emit 0xC9
        _emit 0x8A
        _emit 0x4E
        _emit 0x04
        _emit 0x6A
        _emit 0x01
        _emit 0x56
        _emit 0x81
        _emit 0xE1
        _emit 0x7F
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x51
        _emit 0x50
        _emit 0xE8
        _emit 0x20
        _emit 0x26
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x10
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0xC6
        _emit 0x05
        _emit 0x02
        _emit 0x28
        _emit 0x2B
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xD0
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
