/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001995E0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF9
        _emit 0xC7
        _emit 0x41
        _emit 0x08
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xE1
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
