/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000D8D70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x68
        _emit 0x80
        _emit 0x8C
        _emit 0x0D
        _emit 0x00
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xE8
        _emit 0x46
        _emit 0x2F
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
