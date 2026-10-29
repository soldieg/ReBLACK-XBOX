/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F8490(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x08
        _emit 0xB8
        _emit 0xE8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x21
        _emit 0xBB
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
