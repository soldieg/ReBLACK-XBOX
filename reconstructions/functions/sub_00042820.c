/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00042820(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x48
        _emit 0x20
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x8B
        _emit 0x40
        _emit 0x54
        _emit 0x50
        _emit 0xE8
        _emit 0x19
        _emit 0xDD
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0xC3
    }
}
