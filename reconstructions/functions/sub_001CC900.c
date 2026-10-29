/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001CC900(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x52
        _emit 0x8D
        _emit 0xB1
        _emit 0x00
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x30
        _emit 0x8B
        _emit 0xFC
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
