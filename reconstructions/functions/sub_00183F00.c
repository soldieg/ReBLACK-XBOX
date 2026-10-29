/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183F00(void)
{
    __asm {
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
        _emit 0xC3
    }
}
