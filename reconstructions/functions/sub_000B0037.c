/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B0037(void)
{
    __asm {
        _emit 0x7C
        _emit 0xEE
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0xC1
        _emit 0x69
        _emit 0xC0
        _emit 0x04
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x80
        _emit 0x24
        _emit 0x57
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x80
        _emit 0x80
        _emit 0xF4
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
