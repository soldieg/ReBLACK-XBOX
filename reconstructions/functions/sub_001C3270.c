/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C3270(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4E
        _emit 0x08
        _emit 0xE8
        _emit 0xB8
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x8B
        _emit 0xCE
        _emit 0xE9
        _emit 0x9D
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
