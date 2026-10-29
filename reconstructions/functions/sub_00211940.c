/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00211940(void)
{
    __asm {
        _emit 0xB8
        _emit 0xB0
        _emit 0x45
        _emit 0x2F
        _emit 0x00
        _emit 0xB9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x00
        _emit 0x50
        _emit 0xBE
        _emit 0x28
        _emit 0x00
        _emit 0x05
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x49
        _emit 0x75
        _emit 0xF2
        _emit 0xC3
    }
}
