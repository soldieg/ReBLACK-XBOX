/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00055555(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x4E
        _emit 0x08
        _emit 0x89
        _emit 0x96
        _emit 0x0C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x86
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x06
        _emit 0xF8
        _emit 0x4D
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
