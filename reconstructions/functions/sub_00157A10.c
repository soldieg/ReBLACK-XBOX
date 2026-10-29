/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00157A10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8B
        _emit 0x82
        _emit 0x30
        _emit 0x68
        _emit 0x08
        _emit 0x00
        _emit 0x51
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0xE8
        _emit 0x98
        _emit 0x05
        _emit 0xEC
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
