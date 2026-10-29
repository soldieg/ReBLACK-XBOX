/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0021CCFF(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x81
        _emit 0xC1
        _emit 0xD4
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x05
        _emit 0x48
        _emit 0x46
        _emit 0x22
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x19
        _emit 0xF7
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
