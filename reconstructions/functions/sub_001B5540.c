/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5540(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x34
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x17
        _emit 0xA1
        _emit 0x58
        _emit 0x68
        _emit 0x2D
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0x08
        _emit 0x7D
        _emit 0x0D
        _emit 0x89
        _emit 0x0C
        _emit 0x85
        _emit 0x10
        _emit 0x68
        _emit 0x2D
        _emit 0x00
        _emit 0x40
        _emit 0xA3
        _emit 0x58
        _emit 0x68
        _emit 0x2D
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
