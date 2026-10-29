/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184600(void)
{
    __asm {
        _emit 0x8B
        _emit 0x46
        _emit 0x64
        _emit 0x85
        _emit 0xC0
        _emit 0x76
        _emit 0x07
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x40
        _emit 0xC7
        _emit 0x46
        _emit 0x70
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
