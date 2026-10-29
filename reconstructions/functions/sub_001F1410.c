/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1410(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x74
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0x68
        _emit 0x17
        _emit 0xE3
        _emit 0xFF
        _emit 0xC3
    }
}
