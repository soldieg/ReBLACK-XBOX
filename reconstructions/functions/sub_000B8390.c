/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8390(void)
{
    __asm {
        _emit 0x51
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x14
        _emit 0x8B
        _emit 0x16
        _emit 0x89
        _emit 0x04
        _emit 0x24
        _emit 0xDB
        _emit 0x04
        _emit 0x24
        _emit 0x8B
        _emit 0xCE
        _emit 0xD9
        _emit 0x1C
        _emit 0x24
        _emit 0xFF
        _emit 0x52
        _emit 0x10
        _emit 0xD8
        _emit 0x3C
        _emit 0x24
        _emit 0x59
        _emit 0xC3
    }
}
