/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C35A0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x32
        _emit 0x89
        _emit 0x70
        _emit 0x20
        _emit 0x8B
        _emit 0x52
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x24
        _emit 0x8B
        _emit 0x11
        _emit 0x89
        _emit 0x50
        _emit 0x28
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x2C
        _emit 0x5E
        _emit 0xC3
    }
}
