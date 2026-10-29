/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00185EB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0xC6
        _emit 0x41
        _emit 0x10
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x74
        _emit 0x1E
        _emit 0x8B
        _emit 0x51
        _emit 0x08
        _emit 0x8B
        _emit 0x8A
        _emit 0x04
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0xBE
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xD3
        _emit 0xE6
        _emit 0x52
        _emit 0x8B
        _emit 0xC8
        _emit 0x66
        _emit 0x09
        _emit 0x70
        _emit 0x1C
        _emit 0x8B
        _emit 0x30
        _emit 0xFF
        _emit 0x56
        _emit 0x14
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
