/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0022043F(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x8D
        _emit 0x84
        _emit 0x08
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x18
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x89
        _emit 0x50
        _emit 0x1C
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0x90
        _emit 0xCB
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x10
        _emit 0x00
    }
}
