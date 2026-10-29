/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187F80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x70
        _emit 0x8B
        _emit 0x4A
        _emit 0x2C
        _emit 0x8D
        _emit 0x04
        _emit 0x80
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
