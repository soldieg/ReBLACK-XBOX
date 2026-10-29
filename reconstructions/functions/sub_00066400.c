/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00066400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0xB0
        _emit 0xDE
        _emit 0x2B
        _emit 0x00
        _emit 0x85
        _emit 0x48
        _emit 0x1C
        _emit 0x74
        _emit 0x05
        _emit 0xE9
        _emit 0x7C
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
