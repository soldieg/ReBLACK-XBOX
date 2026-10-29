/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E9200(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x8B
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x71
        _emit 0x50
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x12
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0x49
        _emit 0xE2
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x76
        _emit 0x50
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0xF2
        _emit 0x5E
        _emit 0xC3
    }
}
