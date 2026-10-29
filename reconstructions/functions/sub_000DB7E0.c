/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DB7E0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x0F
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x10
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x20
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x30
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x40
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x50
        _emit 0xC3
    }
}
