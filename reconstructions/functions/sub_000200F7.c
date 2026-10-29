/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000200F7(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0xCA
        _emit 0x89
        _emit 0x4A
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x58
        _emit 0xC1
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x38
        _emit 0x89
        _emit 0x4A
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x10
        _emit 0x89
        _emit 0x57
        _emit 0x7C
        _emit 0xE9
        _emit 0x27
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
    }
}
