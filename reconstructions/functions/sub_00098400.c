/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00098400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x80
        _emit 0x78
        _emit 0x01
        _emit 0x01
        _emit 0x7D
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x8B
        _emit 0x10
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x1C
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1C
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0xE9
        _emit 0xE2
        _emit 0xB4
        _emit 0xFF
        _emit 0xFF
    }
}
