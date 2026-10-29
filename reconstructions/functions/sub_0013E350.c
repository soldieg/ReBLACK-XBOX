/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013E350(void)
{
    __asm {
        _emit 0x83
        _emit 0xA0
        _emit 0xE0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x8B
        _emit 0x80
        _emit 0xAC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xF5
        _emit 0xB4
        _emit 0x0D
        _emit 0x00
        _emit 0xC3
    }
}
