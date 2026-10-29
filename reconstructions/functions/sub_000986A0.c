/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000986A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x10
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0x08
        _emit 0xD9
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
        _emit 0x56
        _emit 0xE8
        _emit 0x36
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x0D
        _emit 0xE8
        _emit 0x0B
        _emit 0xAE
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0xDB
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x5E
        _emit 0xC3
    }
}
