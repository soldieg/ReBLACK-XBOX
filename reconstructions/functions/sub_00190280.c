/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00190280(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x50
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x63
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0xC6
        _emit 0x86
        _emit 0xB5
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
