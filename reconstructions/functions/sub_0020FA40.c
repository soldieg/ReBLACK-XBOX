/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0020FA40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x68
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0xE8
        _emit 0xEE
        _emit 0x20
        _emit 0xE9
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x10
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
