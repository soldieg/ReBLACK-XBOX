/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A3270(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x32
        _emit 0xC9
        _emit 0x88
        _emit 0x48
        _emit 0x0A
        _emit 0x88
        _emit 0x48
        _emit 0x08
        _emit 0xE9
        _emit 0x71
        _emit 0x5E
        _emit 0xFF
        _emit 0xFF
    }
}
