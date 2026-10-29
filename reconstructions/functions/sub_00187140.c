/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187140(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x70
        _emit 0x45
        _emit 0x2F
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x20
        _emit 0xC7
        _emit 0x40
        _emit 0x08
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0xC3
    }
}
