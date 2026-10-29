/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0021806C(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x40
        _emit 0x04
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x61
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0x6A
        _emit 0x01
        _emit 0xFF
        _emit 0x10
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
