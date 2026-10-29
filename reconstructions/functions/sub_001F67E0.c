/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F67E0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0x33
        _emit 0xC0
        _emit 0x88
        _emit 0x41
        _emit 0x0C
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x41
        _emit 0x08
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x70
        _emit 0x45
        _emit 0x2F
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x41
        _emit 0x10
        _emit 0x89
        _emit 0x41
        _emit 0x20
        _emit 0xC3
    }
}
