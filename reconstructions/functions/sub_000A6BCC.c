/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A6BCC(void)
{
    __asm {
        _emit 0x58
        _emit 0xD9
        _emit 0xE4
        _emit 0x9B
        _emit 0xDD
        _emit 0xBD
        _emit 0x60
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x9B
        _emit 0xF6
        _emit 0x85
        _emit 0x61
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x01
        _emit 0x75
        _emit 0x0F
        _emit 0xDD
        _emit 0xD8
        _emit 0xDB
        _emit 0x2D
        _emit 0x74
        _emit 0xC9
        _emit 0x29
        _emit 0x00
        _emit 0x0A
        _emit 0xED
        _emit 0x74
        _emit 0x02
        _emit 0xD9
        _emit 0xE0
        _emit 0xC3
        _emit 0xC6
        _emit 0x85
        _emit 0x70
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x04
        _emit 0xE9
        _emit 0xCF
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xDD
        _emit 0xD8
    }
}
