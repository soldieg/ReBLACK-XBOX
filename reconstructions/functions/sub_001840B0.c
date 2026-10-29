/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001840B0(void)
{
    __asm {
        _emit 0x85
        _emit 0xC9
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x74
        _emit 0x0C
        _emit 0x49
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x85
        _emit 0xC9
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x75
        _emit 0xF4
        _emit 0xC3
    }
}
