/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00144140(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x91
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x90
        _emit 0xB4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0xB4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x40
        _emit 0x18
        _emit 0xC3
    }
}
