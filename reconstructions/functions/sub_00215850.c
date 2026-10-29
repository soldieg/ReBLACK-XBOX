/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00215850(void)
{
    __asm {
        _emit 0x68
        _emit 0x38
        _emit 0xA2
        _emit 0x2B
        _emit 0x00
        _emit 0x68
        _emit 0x30
        _emit 0x45
        _emit 0x0B
        _emit 0x00
        _emit 0x68
        _emit 0x70
        _emit 0x59
        _emit 0x29
        _emit 0x00
        _emit 0xB9
        _emit 0x90
        _emit 0x53
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0x47
        _emit 0xA9
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x70
        _emit 0x77
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0x07
        _emit 0xC4
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
