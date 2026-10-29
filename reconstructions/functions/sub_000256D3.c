/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000256D3(void)
{
    __asm {
        _emit 0xFF
        _emit 0x75
        _emit 0xEC
        _emit 0xE8
        _emit 0x3E
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0x83
        _emit 0x4D
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x75
        _emit 0xE4
        _emit 0xFF
        _emit 0x15
        _emit 0xE0
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0xCC
    }
}
