/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BC560(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8B
        _emit 0x42
        _emit 0x04
        _emit 0x51
        _emit 0x8B
        _emit 0x48
        _emit 0x20
        _emit 0xE8
        _emit 0x4B
        _emit 0xBA
        _emit 0xE5
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
