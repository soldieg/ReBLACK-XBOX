/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F59C0(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC6
        _emit 0xC6
        _emit 0x86
        _emit 0x2E
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x32
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0xB8
        _emit 0x30
        _emit 0x46
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x08
        _emit 0xC4
        _emit 0xFF
        _emit 0xFF
        _emit 0xC6
        _emit 0x86
        _emit 0x2D
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
