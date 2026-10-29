/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187F20(void)
{
    __asm {
        _emit 0x8A
        _emit 0x48
        _emit 0x74
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x70
        _emit 0xE9
        _emit 0x91
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
