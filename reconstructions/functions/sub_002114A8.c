/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002114A8(void)
{
    __asm {
        _emit 0x8B
        _emit 0x45
        _emit 0xD8
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x51
        _emit 0x8B
        _emit 0x55
        _emit 0x04
        _emit 0x52
        _emit 0xE8
        _emit 0x48
        _emit 0xF9
        _emit 0xE3
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0xC3
        _emit 0xB8
        _emit 0x54
        _emit 0x63
        _emit 0x29
        _emit 0x00
        _emit 0xE9
        _emit 0x19
        _emit 0x2D
        _emit 0xE9
        _emit 0xFF
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
