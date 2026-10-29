/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001D1C30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x8E
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x19
        _emit 0x57
        _emit 0x8B
        _emit 0xB8
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xC2
        _emit 0x41
        _emit 0xEE
        _emit 0xFF
        _emit 0xA1
        _emit 0xD8
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x53
        _emit 0xE8
        _emit 0x77
        _emit 0x66
        _emit 0x02
        _emit 0x00
        _emit 0x89
        _emit 0x7E
        _emit 0x78
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC3
    }
}
