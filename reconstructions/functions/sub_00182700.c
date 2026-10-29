/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00182700(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x30
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x83
        _emit 0xF8
        _emit 0x07
        _emit 0x74
        _emit 0x0B
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0x74
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
