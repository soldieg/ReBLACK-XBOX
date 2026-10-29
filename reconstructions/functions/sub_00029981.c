/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00029981(void)
{
    __asm {
        _emit 0x83
        _emit 0xE9
        _emit 0x04
        _emit 0xE9
        _emit 0x5D
        _emit 0x05
        _emit 0x1F
        _emit 0x00
        _emit 0x83
        _emit 0xE9
        _emit 0x08
        _emit 0xE9
        _emit 0xDD
        _emit 0x34
        _emit 0x1F
        _emit 0x00
    }
}
