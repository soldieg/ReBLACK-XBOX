/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018FA10(void)
{
    __asm {
        _emit 0xB8
        _emit 0xE8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE9
        _emit 0xA6
        _emit 0x45
        _emit 0x06
        _emit 0x00
    }
}
