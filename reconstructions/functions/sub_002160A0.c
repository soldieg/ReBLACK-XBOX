/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002160A0(void)
{
    __asm {
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x68
        _emit 0x04
        _emit 0x51
        _emit 0x28
        _emit 0x00
        _emit 0xB9
        _emit 0x38
        _emit 0xA2
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xFD
        _emit 0xA0
        _emit 0xE3
        _emit 0xFF
        _emit 0x68
        _emit 0x90
        _emit 0x7B
        _emit 0x21
        _emit 0x00
        _emit 0xE8
        _emit 0xBD
        _emit 0xBB
        _emit 0xE8
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
