/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0010E350(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x04
        _emit 0x8B
        _emit 0x4E
        _emit 0x48
        _emit 0x8B
        _emit 0x41
        _emit 0x18
        _emit 0x48
        _emit 0x56
        _emit 0xE8
        _emit 0xBB
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x76
        _emit 0x48
        _emit 0x81
        _emit 0x66
        _emit 0x1C
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFD
        _emit 0x5E
        _emit 0xC3
    }
}
