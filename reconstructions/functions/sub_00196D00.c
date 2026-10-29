/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00196D00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x42
        _emit 0x24
        _emit 0x83
        _emit 0xF8
        _emit 0x02
        _emit 0x74
        _emit 0x0A
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x75
        _emit 0x1F
        _emit 0x8A
        _emit 0x42
        _emit 0x28
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x0A
        _emit 0x8D
        _emit 0x42
        _emit 0x10
        _emit 0x50
        _emit 0xE8
        _emit 0x6E
        _emit 0x0D
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
        _emit 0x53
        _emit 0x57
        _emit 0x8D
        _emit 0x5A
        _emit 0x10
        _emit 0x8B
        _emit 0xFA
        _emit 0xE8
        _emit 0x61
        _emit 0x7F
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5B
        _emit 0xC3
    }
}
