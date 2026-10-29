/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00179710(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x28
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0xC3
    }
}
