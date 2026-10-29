/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00151690(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0xE8
        _emit 0xA7
        _emit 0x43
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8
        _emit 0x32
        _emit 0x43
        _emit 0xFF
        _emit 0xFF
        _emit 0xE8
        _emit 0x4D
        _emit 0xE8
        _emit 0xFE
        _emit 0xFF
        _emit 0x8B
        _emit 0xF7
        _emit 0xE8
        _emit 0xE6
        _emit 0xD0
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
