/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B0079(void)
{
    __asm {
        _emit 0x41
        _emit 0x81
        _emit 0xC2
        _emit 0x04
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0x3D
        _emit 0x08
        _emit 0x60
        _emit 0x00
        _emit 0x00
        _emit 0x7C
        _emit 0xE9
        _emit 0x5E
        _emit 0xC3
        _emit 0x69
        _emit 0xC9
        _emit 0x04
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x81
        _emit 0x80
        _emit 0x24
        _emit 0x57
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
